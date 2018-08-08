#include<iostream>
using namespace std;

int virahankaCount(int n, int *count){
	if(n == 1){
		*count ++; 
		return 1;
	}
	else if(n == 2){
		*count ++;
		return 2;
	}
	else{
		*count = *count + 2;
		return virahankaCount(n-1, count) + virahankaCount(n-2, count);
	}
}

int main(){

	int count = 0;
	cout<< virahankaCount(8,&count)<<endl;
	cout<<"Number of branches: "<<count<<endl;
	return 0;
}
