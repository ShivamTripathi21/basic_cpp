#include<iostream>
using namespace std;

int gcd(int m, int n){
	//pre condition is m>n>0
	if(m%n == 0)return n;
	else return gcd(n, m%n);
}
