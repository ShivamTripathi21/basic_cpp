#include<iostream>
#include "gcdlcm.h"
using namespace std;


int main(){

	int a,b;
	cout<<"Enter the greater number: "; cin>>a;
	cout<<"Enter the smaller number: "; cin>>b;

	cout<<"GCD("<<a<<", "<<b<<") is: "<<gcd(a, b)<<endl;
	cout<<"LCM("<<a<<", "<<b<<") is: "<<lcm(a, b)<<endl;	

	return 0;
}
