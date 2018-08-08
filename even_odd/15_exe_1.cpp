#include<iostream>
using namespace std;

int main(){

	int n;
	cout<<"Enter the number: "<<endl;
	cin>>n;

	int temp = n, i;
	for(i=0; temp%10 != 0; i++){
		temp = (temp - (temp%10))/10;
	}
	
	int *number = new int[i];

	char digit[9][10]={"one","two","three","four","five","six","seven","eight","nine"};
	char number_name[10][10];

	for(int j=n, k=10; j>0; j--){
		if(j == n){
			number_name[k][10]=digit[number[j]-1][10];
			k = k-1;
		}
		else if(j == n-1){
			number_name[k][10]=digit[number[j]-1][10];
			//number_name[k-1][10]="and";
			k=k-2;
		}
		else if(j == n-2){
			//number_name[k][10]="hundred";
			number_name[k-1][10]=digit[number[j]-1][10];
                        k=k-2;
		}
	}
	for(int i=0; i<10; i++){
		cout<<number_name[i][20]<<endl;
	}		

	return 0;
}
