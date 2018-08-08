#include<iostream>
#include "functions.h"
#include "more.h"
using namespace std;



int main(){
 
	int a;
	cout<<"Enter the number: ";
	cin>>a;

	cout<<"Is even: "<<iseven(a)<<endl;
	cout<<"Is odd: "<<math::isodd(a)<<endl;
	cout<<"Positive of -18 is: "<<math::posi(-18)<<endl;
	cout<<"Positive of -344 is: "<<Abs(-344)<<endl;
        cout<<"Positive of -18.0934 is: "<<Abs(-18.0934)<<endl;



	return 0;
}
