#include<iostream>
using namespace std;

bool bsearch(int *A, int n, int x, int start){
	//x targrt value to search
	// number of element
	if(n == 1) return (x = A[start]);
	int half = n/2;
	if(x < A[start+half])
		return bsearch(A, half, x, start);
	else
		return bsearch(A, n-half, x, start+half);
}

int main(){

	cout<<"Enter the number of element: ";
	int n;
	cin>>n;
	int *A = new int [n];
	
	for(int i=0; i<n; i++){
		cin>>A[i];
	}  	

	cout<<"Enter the value for search: ";
	int x; cin>>x;

	if(bsearch(A, n, x, 0)){
		cout<<"Value is present"<<endl;
	}
	else{
		cout<<"not found"<<endl;
	}

	return 0;
}
