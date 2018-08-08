#include<iostream>
#include <set>
#include <vector>
#include <cstring>
using namespace std;

//naive algorithm

void naive_string_match(vector<char> &A,vector<char> &B){
	int n= A.size();
	int m= B.size();
	
	for(int i=0; i<n-m; i++){
		for(int j=0;j<m; j++){
			if(B[j] == A[i+j]){
				cout<<"Pattern accour with shift : "<<i<<endl;
				
			}
			else{
				break;
			}
		}
	}
	

}
/*
void rabin_karp(vector<char> &A, vector<char> &B,){
	
}*/

vector<int> prefix_function(const vector<char> &p){
	int m = p.size();
	vector<int> pi(m);
	pi[0]=0;
	int k=0;
	for(int i=1; i<m; i++){
		while(k>0 && p[k+1] != p[i]){
			k = pi[k];
		} 
		if(p[k+1] == p[i]){
			k++;
		}
		pi[i] = k;
	}
	return pi;
}


int main(){

	vector<char> A(7);
	vector<char> B(3);
	
	cout<<"Enter bigger string: "<<endl;
	for(int i=0; i<7; i++){
		cin>>A[i];
	}
	cout<<"Enter smaller string: "<<endl;
	for(int i=0; i<3; i++){
		cin>>B[i];
	}
	
	//naive_string_match(A,B);

	vector<int>c;
	c = prefix_function(A);
	for(int i=0; i<7; i++){cout<<c[i]<<endl;}

	return 0;
}
