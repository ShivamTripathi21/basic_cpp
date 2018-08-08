#include<iostream>
using namespace std;

class A{
	public:
	A(){cout<<"A constructor";}
	~A(){cout<<"A destructor";}
};

class B:public A{
	public:
	B(){cout<<"B constructor";}
	~B(){cout<<"B destructor";}
};

class C:public B{
	public:
	C(){cout<<"C constructor";}
	~C(){cout<<"C destructor";}
};

int main(){

	C c;

	return 0;
}
