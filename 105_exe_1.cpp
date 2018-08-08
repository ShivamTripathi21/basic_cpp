#include<iostream>
using namespace std;

int main(){

	float tc, tf;
	
	
	int i=0;
	while(i <= 100){
		 tf = ((i*32)/5) + 32;
		cout<<i<<" in Fahrenheit: "<<tf<<endl;
		i++;
	}

	return 0;
}
