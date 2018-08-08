#include<iostream>
using namespace std;

void merge(int U[], int ul, int V[], int vl, int S[]){
	for(int i=0,j=0,k=0; k<ul+vl; k++){
		if(i<ul && j<vl){
			if(U[i] < V[j]){
				S[k] = U[i];
				i++;
			}
			else{
				S[k] = V[j];
				j++;
			}
		}
		else if(i<ul){
			S[k] = U[i];
			i++;
		}
		else{
			S[k] = V[j];
			j++;
		}		
	}
}

void mergeSort(int *A, int n){
	if(n>1){
		int U[n/2],V[n-n/2];
		for(int i=0;i<n/2;i++)U[i] = A[i];
		for(int i=n/2;i<n;i++)V[i-n/2] = A[i];

		mergeSort(U,n/2);
		mergeSort(V,n/2);

		merge(U,n/2,V,n-n/2,A);
	}
}


int main(){

	int A[] = {45,8,9,3,5,1,56,2};

	mergeSort(A,8);

	for(int i=0; i<8; i++) cout<<A[i]<<endl;

	return 0;
}
