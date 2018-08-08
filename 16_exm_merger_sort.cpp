#include<iostream>
using namespace std;

void merge(int U[], int ul, int V[], int vl, int S[]){
	//length of S will be ul+vl
	for(int uFront=0, vFront=0, sBack=0; sBack < ul+vl; sBack++){
		if(uFront < ul && vFront < vl){
			//both not empty queues
		        if(U[uFront] < V[vFront]){
				S[sBack] = U[uFront];
                        	uFront++;
			}	
			else{
				S[sBack] = V[vFront];
                        	vFront++;
			}	
		}
		else if(uFront < ul){
			//u is not empty
			S[sBack] = U[uFront];
			uFront++;
		}	
		else{
			//v is not empty
			S[sBack] = V[vFront];
			vFront++;
		}
	}
}

void mergeSort(int S[], int n){
	// S is int * tye array
	// n is as size of array
	if(n > 1){
		int U[n/2], V[n-n/2];
		for(int i=0; i<n/2; i++) U[i] = S[i];
		for(int i=n/2; i<n; i++) V[i-n/2] = S[i];
		
		mergeSort(U, n/2);
		mergeSort(V, n-n/2);
		
		merge(U, n/2, V, n-n/2, S);
	}
}

int main(){

	int n;
	cout<<"Enter the number of element: ";
	cin>>n;
	int *A = new int [n];
	for(int i=0; i<n; i++){
		cin>>A[i];
	}	

	mergeSort(A, n);

	cout<<"Sorted array is: "<<endl;
	for(int i=0; i<n; i++){
		cout<<A[i]<<endl;
	}

	return 0;
}
