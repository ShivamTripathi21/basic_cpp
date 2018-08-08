#include<iostream>
using namespace std;

void insertion_sort(int *A,int n){
	int key, j;
	for(int i=1; i < n; i++){
	 	key = A[i];
		j = i - 1;
		while(j>=0 && A[j] > key){
			A[j+1] = A[j];
			j--;
		}
		A[j+1] = key;
	}
}

void insertion_sort_desc(int *A,int n){
	int key, j;
	for(int i=1; i<n; i++){
		key = A[i];
		j = i-1;
		while(j>=0 && A[j] < key){
			A[j+1] = A[j];
			j--;
		}
		A[j+1] = key;
	}
}

int main(){

	int A[] = {5,2,4,6,1,3};

	insertion_sort_desc(A, 6);
	
	for(int i=0; i<6; i++){
		cout<<A[i]<<endl;
	}

	return 0;
}
