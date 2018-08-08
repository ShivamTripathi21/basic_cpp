#include<iostream>
using namespace std;


int binary_search(int A[], int start, int size, int x){
	if(A[start+size/2] == x) return start+size/2;
	else if(A[start+size/2] > x) binary_search(A, start, size/2, x);
	else if(A[start+size/2] < x) binary_search(A, start+size/2, size-(size/2), x);
	//return -1;
}

int main(){
	
	int A[] = {2, 4, 8, 9,34,56,67,78,89,900};
	cout<<binary_search(A,0,10,9);	

	return 0;
}
