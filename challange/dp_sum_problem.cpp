#include<iostream>
#include<vector>
#define N 100
using namespace std;
//given number is 1, 3 and 5

int possible_ways(int n){
	int v[N];
	v[0] = v[1] = v[2] = 1;
	v[3] = 2;
	int t;
	for(int i=4; i<=n; i++){
		v[i] = v[i-1] + v[i-3] + v[i-4];
	}
	return v[n];
}

int main(){

	cout<<possible_ways(5)<<endl;
	return 0;
}
