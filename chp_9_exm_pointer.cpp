#include<iostream>
using namespace std;

int main(){

	//We can store address into variables if we wish, but for this we need to define variables of an appropriate type
	//for example

	int p = 15, q=20;
	int *r;
	int *s = &q;
	// type (int*) is used for containing the address of (int) variable
	r = &p;
	cout<< &p <<" "<< r <<endl;
	cout<< &q <<" "<< s <<endl;

	//dereferencing Operator

	int a = 15, *b;
	b = &a;
	*b = 22;
	int c;
	c = *b;
	cout<< a <<" "<<b<<" "<<c<<endl;

	return 0;
}
