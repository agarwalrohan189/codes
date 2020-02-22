#include <bits/stdc++.h>
using namespace std;

void display(int a[], int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}


void flip(int a[], int i){
	int j=0;
	while(j<i){
		swap(a[i],a[j]);
		i--;
		j++;
	}
}

void pancake_sort(int a[], int n){
	int max_index;
	for(int i=0;i<n-1;i++){
		max_index=0;
		for(int j=0;j<n-i;j++){
			if(a[j]>a[max_index])
				max_index=j;
		}
		// cout<<"max_index "<<max_index<<endl;
		flip(a, max_index);
		// display(a,n);
		flip(a,n-i-1);
		// display(a,n);
	}
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	pancake_sort(a, n);
	// flip(a, 3);
	display(a, n);
}