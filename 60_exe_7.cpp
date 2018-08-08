#include<iostream>
using namespace std;


int main(){

	int d;
	cout<<"One digit number to multiply with M: ";
	cin>>d;

	int n;
	cout<<"Enter the number of digit: ";
	cin>>n;
	int digit, rem = 0;
	for(int i=n; i>0; i--){
		cout<<"Enter the "<< i <<" digit of number: ";
		cin>>digit;
		digit = digit * d + rem;
		cout<<"Multiply answer from least significant to msb: "<< digit % 10 <<endl;
		rem = (digit - (digit  % 10 ))/10;
	}

	return 0;
}
