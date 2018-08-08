#include<iostream>
#include<cmath>
using namespace std;

int main(){

	int n;
        cout<<"Enter the degree of polynomial: ";
        cin>>n;

        cout<<"Enter the value of x: ";
        int x,a,sum=0; cin>>x;
        double t;

        for(int i=n; i>=0; i--){
                cout<<"Enter the value of coefficient: ";
                cin>>a;

                t = a * pow(x,i);
                sum = sum + t;
        }
        cout<<"Value of nth degree polynomial is: "<<sum<<endl;

        
	return 0;
}
