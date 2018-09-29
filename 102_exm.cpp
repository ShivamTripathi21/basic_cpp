#include<iostream>

using namespace std;

int main(){

	int m,n;

	cout<<"Enter the larger number: "; cin>>m;
	cout<<"Enter the smaller number: "; cin>>n;
        cout<<"we always take larger one first"<<endl;
	int l;
	while(m%n != 0){
		int reminder = m%n;
		m = n;
		n = reminder;
		l = 2;
	} 
	cout<<"GCD is: "<<n<<endl;
	cout<<"l is: "<<l<<endl;
	return 0;
}
