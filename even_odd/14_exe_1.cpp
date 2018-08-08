#include<iostream>
using namespace std;

int main(){

	int n, l;
	cout<<"Enter the integer n: ";
	cin>>n;
	cout<<"Enter the length of given number: "<<endl;
	cin>>l;
	int temp = n;
	int *A = new int [l];
	for(int i=l; i>=1; i--){
		A[i-1] = n%10;
		n = (n - (n%10))/10;
	}
	bool flag = false;
	for(int i=0; i<= l/2; i++){
  		if(A[i] != A[l-1-i]){
	       		 flag = false;
		 	 break;	
		}
		else{
			flag=true;
		}
	}
	
	if(flag){cout<<temp<<" is a palindrome."<<endl;}
	else{cout<<temp<<" is not a palindrome."<<endl;}

	return 0;
}
