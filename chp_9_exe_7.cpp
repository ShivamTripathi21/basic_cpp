#include<iostream>
using namespace std;

void f(int x, int &y, int *z){
	cout<<x++<<" "<<y++<<" "<<++*z<<endl;
	cout<<x<<" "<<y<<" "<<*z<<endl;

}

int main(){

	int a=10, b=20, c=30;
	f(a, b, &c);
	f(c, a, &b);

	return 0;
}
