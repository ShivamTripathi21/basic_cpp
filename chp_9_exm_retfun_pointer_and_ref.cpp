#include<iostream>
using namespace std;

int &f(int &x, int &y){
	if(x > y)return x;
	else return y; 
}

int *g(int *x, int *y){
	if(*x > *y) return x;
	else return y;
}

int main(){

	int p=5, q=4;

	f(p, q) = 2;
	cout<<p<<" "<<q<<endl;
	cout<<f(p, q)<<endl;

	*g(&p,&q) = 5;
	cout<<p<<" "<<q<<endl;
        cout<<g(&p,&q)<<endl;


	return 0;
}
