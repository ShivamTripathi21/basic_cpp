#include<iostream>
#include<cmath>
using namespace std;

int ArrMaxIndex(double *A, int n){
	int index = 0;
	for(int i=1; i<n; i++){
		if(A[index] < A[i]){
			index = i;
		}
	}
	return index;
}

double *selSort(double *A, int n){
	//arranging in increasing order
	
	for(int i=n; i>1; i--){
		int maxindex = ArrMaxIndex(A, i);
		double temp = A[i-1];
		A[i-1] = A[maxindex];
		A[maxindex] = temp;
	}
	
	return A;
}

int main(){
	cout<<"Enter the how many number you have: ";
	int n;
	cin>>n;
	double *A = new double[n]; //create A[n] dynamically	
	
	cout<<"Enter the array elements: "<<endl;
	for(int i=0; i<n; i++){
		cin>>A[i];
	}	

	A = selSort(A,n);


	cout<<"	Sorted Array using selection sort: "<<endl;
	for(int i=0; i<n; i++){
		cout<<A[i]<<endl;
	}
	

	return 0;
}
