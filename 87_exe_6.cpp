#include<iostream>
#include<cmath>
using namespace std;

int main(){

	int a, b, c;
	cout<<"Enter the coffecient of X^2: ";
	cin>>a;
	cout<<"Enter the cofficient of X: ";
	cin>>b;
	cout<<"Enter the constant: ";
	cin>>c;

	float D = pow(b,2) - 4*a*c;

	if(D == 0){
		cout<<"x = "<< -(b / (2*a))<<endl;;
	}
	else if(D > 0){
		cout<<"x1 = "<< (-b + sqrt(D))/(2 * a)<<endl<<"x2 = "<<(-b - sqrt(D))/(2 * a)<<endl;
	}
	else{
		cout<<"x1 = "<< (-b/(2*a))<<" + "<< abs(D)<<"i /"<<(2 * a)<<endl<<"x2 = "<<(-b/(2*a))<<" - "<< abs(D)<<"i /"<<(2 * a)<<endl;
	}
	

	return 0;
}
