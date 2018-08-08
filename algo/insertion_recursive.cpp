#include<iostream>
using namespace std;

void insert(int U[], int ul, int V, int S[]){
	int i,j;
	for(i=0,j=0; i<ul+1; i++){
		if(U[j] > V){
			S[i] = V;
			break;
		}
		else{
			S[i] = U[j];
			j++;
		}
	}
	for(i=i+1;i<ul+1;i++,j++){
	 	S[i] = U[j];
	}
}

void insertion_recursive(int A[], int n){
	if(n>1){
		int U[n-1];
		for(int i=0; i<n-1; i++) U[i] = A[i];
		int V = A[n-1];	
		insertion_recursive(U, n-1);
		//insertion_recursive(V, 1);
	
		insert(U, n-1, V, A);
	}
}


int main(){

	int A[]= {4,5,8,1,3,23,56};
	insertion_recursive(A, 7);

	for(int i=0; i<7; i++)cout<<A[i]<<endl;

	return 0;
}
