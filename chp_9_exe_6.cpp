#include<iostream>
using namespace std;

int main(){

	int *x, *y, z=3;

	y = &x;
	z = y;
	y = *x;
	
	return 0;
}
