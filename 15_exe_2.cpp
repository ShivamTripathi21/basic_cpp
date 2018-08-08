#include<iostream>
using namespace std;


int char_to_int(char A[]){
	int sum = 0;
	for(int i=0; A[i] != '\0'; i++){
		sum = sum + A[i] - '0';
		sum = sum * 10;
	}
	return sum/10;
}


int main(){

	char c[10] = "2323434";

	
	cout<<char_to_int(c)<<endl;

	return 0;
}
