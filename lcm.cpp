#include<iostream>
#include"gcdlcm.h"
using namespace std;

int lcm(int m, int n){
	return m*n / gcd(m,n);
}
