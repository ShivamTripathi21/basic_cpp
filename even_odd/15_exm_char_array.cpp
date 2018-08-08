#include<iostream>
using namespace std;

int main(){
	char addr[]="Amarpatan satna";
	cout<<addr<<endl;

	for(int i=0; addr[i] != '\0'; i++){
		cout<< addr[i]<<endl;
	}



	char name2[22];	

	cin.getline(name2, 22);
	cout<<name2<<endl;

	for(int i=0; name2[i] != '\0'; i++){
                cout<< name2[i]<<endl;
        }


	return 0;
}
