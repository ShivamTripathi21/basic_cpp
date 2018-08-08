#include<iostream>
using namespace std;

int main(){

	int n;
	cout<<"Enter the any integer: ";
	cin>>n;

	int temp = n, i;
	cout<<"	Enter the number of digit: ";
	cin>>i;

	int *number = new int[i];
	temp = n;
	for(int j=0; j<i; j++){
		number[j] = temp%10;
		temp = (temp- (temp%10))/10;
	}

	char digit[9][10]={"one","two","three","four","five","six","seven","eight","nine"};
	char tthdigit[9][15]={"ten","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};
	for(int j=i-1; j>=0; j--){
	
		//cout<<digit[number[j]-1]<<" ";
		if(j == 0){ 
			if(number[j] == 0) cout<<" ";
			else cout<<digit[number[j]-1];
		}
		if(j == 1){
			if(number[j] == 0) cout<<"";
			else if(number[0] == 0 && number[j] != 0) cout<<" and "<<tthdigit[number[j]-1];
			else cout<<" and "<<tthdigit[number[j]-1]<<" ";
		}
		if(j == 2){
			if(number[j] == 0) cout<<" ";
			else cout<<digit[number[j]-1]<<" hundred"; 
		}
		if(j == 3){
			if(number[j] == 0) cout<<" ";
			else cout<<digit[number[j]-1]<<" thousent ";
		}
	}

	return 0;
}
