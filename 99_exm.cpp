#include<iostream>
using namespace std;

int main(){

	int n;
	cout<<"Enter th number: ";
	cin>>n;
	
	bool found = false;

	for(int i=2; i<n; i++){
		if(n%i == 0){
			found =true;
			break;
		}
	}

	if(found) cout<<n<<" Composite number."<<endl;
	else cout<<n<<" is Prime number."<<endl;
	

	return 0;

}
