#include<iostream>
using namespace std;


int main(){

	int x;
	int &r = x;

	x = 10;
	cout<<x<<" "<<r<<endl;
	r = 20;
	cout<<x<<" "<<r<<endl;
	
	int y;
	cout<< &y <<" and Y= "<<y<<endl;	

	return 0;
}
