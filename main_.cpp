#include<iostream>
#include<cassert>
using namespace std;

int joker(int x){
	assert(x>0);
	return x;
}

int main(){
	cout<<joker(-2)<<endl;
	return 0;
}
