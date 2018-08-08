#include<iostream>
using namespace std;

int Virhanka(int n){

	if(n == 1)return 1;
	if(n == 2)return 2;

	return Virhanka(n-1)+Virhanka(n-2);

}

int GCD(int m, int n){

	if(m%n == 0)return n;
	else return GCD(n, m%n);

}

int main(){

	cout<<GCD(36, 24)<<endl;
	cout<<Virhanka(5)<<endl;

	return 0;
}
