#include<iostream>
using namespace std;

int rec_fib(int n){
	if(n<2) return 1;
	return rec_fib(n-1) + rec_fib(n-2); 
}

int dp_fib(int n){
	int *fibres = new int[n];
	fibres[0] = 1;
	fibres[1] = 1;
	for(int i=2; i<=n; i++){
		fibres[i] = fibres[i-1] + fibres[i-2];
	}
	return fibres[n];
}
int dp_fib_opt(int n){
	int a=1,b=1,c,temp;
	for(int i=2; i<=n; i++){
		c = a + b;
		temp = a;
		a = c;
		b = temp;
	}
	return c;
}

int main(){
	
	cout<<dp_fib_opt(5)<<endl;
	
	return 0;
}
