#include<iostream>
using namespace std;

void f(int *&a, int* &b){
	cout<< *a<<endl;
	a = b;
}

int main(){
	int x=5, y=10;
	int *p = &x, *q = &y;
	f(p, q);
	cout<< *p<<" "<<*q<<endl;

	return 0;
}
