#include<iostream>
using namespace std;

int main(){

	int n;
	cout<<"Enter the how many numbers are: ";
	cin>>n;

	int count[22];
	for(int i=0; i<22; i++){
		count[i]==0;
	}

	for(int i=0; i<n; i++){

		float marks;
		cout<<"Enter the "<<i <<" mark: ";
		cin>>marks;
		float t = 0.05;
		for(int x=0; x<5; x++){
			if(marks <= t) count[x]++;
			t = t + 0.05;
		}
		t = 0.025;
		for(int x=5; x<17; x++){
                        if(marks <= t) count[x]++;
                        t = t + 0.025;
                }
		t = 0.05;
		for(int x=17; x<22; x++){
                        if(marks <= t) count[x]++;
                        t = t + 0.05;
                }



	}

	for(int i=0; i<22; i++){
		cout<<count[i]<<endl;
	}

	return 0;
}
