#include<iostream>
using namespace std;

bool isLeap(int year){

	if(year % 4 == 0){
		if(year %100 == 0){
 			if(year%400 == 0){
				return true;
			}
			else{
				return false;
			}
		}
		else{
			return true;
		}
	}
	else{
		return false;
	}

}

int main(){

	int y, d;
	cout<<"Enter the year: ";
	cin>>y;
	cout<<"Enter the day: ";
	cin>>d;

	int A[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	if(isLeap(y)) A[1]=29;

	int t=d, rem;
	for(int i=0; i<12; i++){
		rem = t-A[i];
		if(rem <= 0){
			cout<<"Date is: "<<t<<"/"<<i+1<<"/"<<y<<endl;
			break;	
		}
		else{
			t = t - A[i];
		}
	}

	return 0;
}
