#include<iostream>
#include<cstring>
using namespace std;

int main(){

	string cards[13] = {"ace","2","3","4","5","6","7","8","9","10","Jack","Queen","King"};
	string suit[4] = {"Clubs","Diamonds","Hearts","Spades"};
	cout<<"Enter the card denomination: ";
	int n; cin>>n;

	for(int i=0; i<4; i++){
		if(n<=13){
			cout<<cards[n-1]<<" of "<<suit[i]<<endl;
			break;
		}
		else{
			n = n-13;
		}	
	}

	return 0;
}
