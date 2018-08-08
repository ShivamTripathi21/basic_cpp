#include<iostream>

using namespace std;

int main(){

	int m,n;

	cout<<"Enter the larger number: "; cin>>m;
	cout<<"Enter the smaller number: "; cin>>n;

	while(m%n != 0){
		int reminder = m%n;
		m = n;
		n = reminder;
	} 
	cout<<"GCD is: "<<n<<endl;

	return 0;
}
