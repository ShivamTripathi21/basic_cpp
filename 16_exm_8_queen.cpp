#include<iostream>
using namespace std;

bool capture(int Q[], int n){
	// return true if queen stored in Q[0....n-1]capture each other
	for(int j=1; j<n; j++){
		for(int k=0; k<j; k++){
			if((Q[j] == Q[k]) || (abs(j-k) == abs(Q[j]-Q[k]))){
				return true;
			}
		}
	}
	return false;
}

int main(){
	
	

	return 0;
}
