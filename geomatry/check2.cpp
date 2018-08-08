#include<iostream>
using namespace std;

class A{
	public:
	virtual int f(){return 1;}
	int g(){return 2;}
};

class B: public A{
	public:
	int f(){return 3;}
	int g(){return 4;}
};

int main(){

	A *aptr;
	aptr = new B;
	cout<<aptr->f()<<" "<<aptr->g()<<endl;	

	return 0;
}

