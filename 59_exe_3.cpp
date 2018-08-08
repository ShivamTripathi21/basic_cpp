#include<iostream>
#include<cmath>
using namespace std;

int factorial(int n){
	if(n==0) return 1;
	else if(n==1) return 1;
	else return n * factorial(n-1);
}



int main(){

	cout<<"Enter the number: ";
	int x;
	cin>>x;

	float sum=0,t;

	for(int i=0; i<15; i++){
		t = pow(x,i) / factorial(i);	
		sum = sum + t;
	}
 
	cout<<"Sum of the exp("<<x<<") is: "<<sum<<endl;

	return 0;
}
