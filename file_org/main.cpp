#include<iostream>
#include"functions.h"

using namespace std;

int main(){

	int num;
	cout<<"Enter the number: "<<endl;
	cin>>num;

	if(iseven(num)){
		cout<<"number is even"<<endl;
	}
	else if(isodd(num)){
		cout<<"number is odd"<<endl;
	}

	return 0;
}
