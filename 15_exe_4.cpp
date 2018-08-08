#include<iostream>
using namespace std;

bool compare(char *A, char *B){
	int i=0;
	bool flag = false;
	while(A[i] != '\0' || B[i] != '\0'){
		if(A[i] == B[i]) flag = true;
		else{
			flag = false;
			break;
		}
		i++;
	}
	return flag;
}

int main(){

	char student[3][20];

	int n = 3;
	float *marks = new float[n];

	for(int i=0; i<n; i++){
		cout<<"Enter the student marks: ";
		cin >> marks[i];
		cout<<"Enter the stduent name: ";
		cin>>student[i];
	}

	cout<<endl<<endl<<endl;

	char name[20];
	cout<<"Enter the student name: ";
	cin>>name;

	for(int i=0; i<n; i++){
		if(compare(student[i], name)){
			cout<<student[i]<<" marks is: "<<marks[i]<<endl;
		}
	}	

	return 0;
}
