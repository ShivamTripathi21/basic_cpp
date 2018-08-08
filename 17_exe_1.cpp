#include<iostream>
#include<cmath>
using namespace std;

//member function

struct v3{
	double x,y,z;
	double length(){
		return sqrt(x*x + y*y +z*z);
	}
	v3 sum(v3 const b){
		v3 v;
		v.x = x + b.x;
		v.y = y + b.y;
		v.z = z + b.z;
		return v;
	}
	void joker(double q){
		this->x = q;
		cout<< length() <<endl;
	}
};

int main(){

	v3 p = {1.0, 2.0, 3.0};
	v3 q = {2.0, 3.0, 4.2};

	cout<<"initial: "<<endl;
	cout<<"p: "<< p.x <<" "<<p.y<<" "<<p.z<<endl;
	cout<<"q: "<< q.x <<" "<<q.y<<" "<<q.z<<endl;

	cout<<p.length()<<endl;
	
	q = p.sum(q);
	cout<<"p: "<< p.x <<" "<<p.y<<" "<<p.z<<endl;
	cout<<"q: "<< q.x <<" "<<q.y<<" "<<q.z<<endl;

	p.joker(5);
	cout<<"p: "<< p.x <<" "<<p.y<<" "<<p.z<<endl;

	return 0;
}
