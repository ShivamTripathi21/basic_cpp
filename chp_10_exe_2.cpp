#include<iostream>
using namespace std;

int ncr(int n, int r){

	if(r == 0) return 1;
	if(n == r) return 1;
	return ncr(n-1, r) + ncr(n-1, r-1);

}

int main(){
	cout<<"Enter the value of n in NcR: ";
	int n; cin>>n;

	cout<<"Enter the value or r in NcR: ";
	int r; cin>>r;

	cout<<n<<"c"<<r<<" : "<<ncr(n, r)<<endl;

	return 0;
}
