#include<iostream>
#include<vector>

using namespace std;

void print(vector<int> v){
	for(size_t i=0; i<v.size(); i++) cout<<v[i]<<" ";
	cout<<endl;
}

void read(vector<int> &v){
	for(size_t i=0; i<v.size(); i++) cin>>v[i];
}

int main(){
	vector<int> v(5);
	read(v);
	print(v);
	return 0;
}
