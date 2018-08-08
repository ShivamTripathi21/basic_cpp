#include<cmath>
#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;

vector<int> plusOne(vector<int> &A) {
    int carry=1;
    int t; 
    for(int i=A.size()-1; i>=0; i--){
        t = A[i] + carry;
        if(t >= 10) carry = t/10; 
        else{carry =0;}
	A[i] = t%10;
    }
    if(carry>0)  A.insert(A.begin(), carry;
    return A;
}

int main(){

	vector<int> v;
	int n;
	cout<<"Enter the number of digits : "<<endl;
	cin>>n;
	cout<<"Enter the your number: "<<endl;
	int a;
	for(int i=0; i<n; i++){
		cin>>a;	
		v.push_back(a);
	}

	plusOne(v);
	for(int i=0; i<v.size(); i++) cout<<v[i]<<endl;

	return 0;
}
