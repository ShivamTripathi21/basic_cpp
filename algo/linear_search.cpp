#include<iostream>
using namespace std;

int linear_search(int A[], int n, int x){
	int i;
	for(i=0; i<n; i++){
		if(A[i] == x) return i;
	}
	return -1;
}

int  main(){

	int A[]= {2,45,5,6,76,78,98,90};

	cout<<linear_search(A, 8, 78)<<endl;
	cout<<linear_search(A, 8, 108)<<endl;	

	return 0;
}
