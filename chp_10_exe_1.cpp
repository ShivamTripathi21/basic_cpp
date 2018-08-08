#include<iostream>
using namespace std;

int fact(int m){
	if(m == 0)return 1;
	if(m == 1)return 1;
	return m * fact(m-1);
}

int main(){
	cout<<"Enter any number: ";
	int n;
	cin>>n;

	cout<<"Factorial of "<<n<<" is: "<<fact(n)<<endl;	

	return 0;
}
