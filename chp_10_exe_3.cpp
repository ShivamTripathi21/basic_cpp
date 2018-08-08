#include<iostream>
using namespace std;

int gcd(int m, int n){
	if(m%n == 0)return n;
	else return gcd(n, m%n);
}

int solution(int &a, int &b, int c){
	if( a+b < c){
            return a,b;
	}
	else{
		//we will substitute and try to change greate cofficent to smaller 
		if(a>b){
			a = a-b;
		}
		else{
			b = b-a;
		}
	}
	return solution(a,b,c);	

}

int main(){

	int a, b, c;
	cout<<"Enter the value of a, b and c: "<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
	
		

	if(c % gcd(a,b) != 0){
		cout<<"Equation does not have any solution."<<endl;
	}
	else{
		cout<<solution(a,b,c)<<endl;
		cout<<a<<" "<<b<<" "<<c<<endl;
	}

	return 0;
}
