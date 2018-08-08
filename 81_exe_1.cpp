#include<iostream>
using namespace std;


int main(){
        cout<<"Enter your marks: ";
	int marks;
        cin >> marks;

        int actual_marks = (marks > 100) ? 100 : marks;
        char grade = (marks >= 35) ? 'p':'f';

        cout<<"Actual marks: "<<actual_marks<<endl<<"Grade: "<<grade<<endl;
	


	return 0;
}
