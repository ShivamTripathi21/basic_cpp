#include<iostream>
using namespace std;

int gcd(int m, int n){
	int rem;
	if(m%n != 0){
		rem = m % n;
		m = n;
		n = rem;
	}
	return n;

}

int lcm(int m, int n){
	return (m * n)/gcd(m, n);
}

void swap(int &m, int &n){

	int temp;
	temp = n;
	n = m;
	m = temp;

}

int main(){

	int a,b;
	cout<<"Enter the first number: "; cin>>a;
	cout<<"Enter the second number: "; cin>>b;

	if(a < b ){
 		swap(a, b);
	}	

	cout<<"LCM of "<<a<<" and "<<b<<" is: "<<lcm(a,b)<<endl;
	cout<<"GCD of "<<a<<" and "<<b<<" is: "<<gcd(a,b)<<endl;

	return 0;
}
