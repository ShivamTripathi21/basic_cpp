#include<iostream>
using namespace std;


void top_ten(int *arr, int n, int *tt){
	for(int i=0; i<n; i++){
		int key = arr[i];
		for(int j=0; j<10; j++){
			if(tt[j] < key){
				for(int k = 9; k>j; k--){
					tt[k] = tt[k-1];
				}
				tt[j] = key;
			}
		}
	}
	
}


int main(){
	int arr[25];
	
	cout<<"Enter the array: "<<endl;
	for(int i=0; i<15; i++){
		cin>>arr[i];
	}	

	int topten[10];
	top_ten(arr, 15, topten);
	
	for(int i=0; i<10; i++){
		cout<<topten[i]<<endl;
	}
	
	return 0;
}
