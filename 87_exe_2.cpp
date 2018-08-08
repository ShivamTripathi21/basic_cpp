#include<iostream>
using namespace std;

int main(){

	int a,b,c;
	cout<<"Enter the three numbers: "<<endl;
	cin>>a;
	cin>>b;
	int temp;
	if(a > b){
		temp = a;
		a = b;
		b = temp;
	}
	cin>>c;
	if(c < a) cout<<c<<' '<<a<<' '<<b<<endl;
	else if(c > b) cout<<a<<' '<<b<<' '<<c<<endl;
	else cout<<a<<' '<<c<<' '<<b<<endl;



	return 0;
}
