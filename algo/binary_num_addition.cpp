#include<iostream>
using namespace std;


int *binaryAddition(int *A, int *B, int n){
	int *C = new int[n+1];
	int temp;
	for(int i=n-1; i>=0; i--){
		temp = A[i] + B[i];
		C[i+1] = C[i+1] + temp;
		if(C[i+1] == 2){
			C[i+1] = 0;
			C[i] = 1;
		}
	}
	return C;
}


int main(){
	int A[]={1,0,0};
	int B[]={1,1,1};
	int *C;
	C = binaryAddition(A,B,3);
	for(int i=0; i<=3; i++){
		cout<<C[i]<<" ";
	}
	return 0;
}
