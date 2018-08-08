#include<iostream>
using namespace std;

void rotate(int *A, int n, int k){
	if(k == 1){
		int temp =A[0];
		for(int i=0; i<n-1; i++){
			A[i] = A[i+1];
		}
		A[n-1] = temp;
	}
	else{
		rotate(A,n,k-1);
	}
}

int main(){

	int A[]={1,2,3,4,5,6};
	rotate(A, 6, 3);

	for(int i=0; i<6; i++){
		cout<<A[i]<<endl;
	}

	return 0;
}
