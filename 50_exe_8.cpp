#include<iostream>
#include<cmath>
using namespace std;

int main(){

    //input a,r,n of geomatric series

    int a,r,n;
    cout<<"Enter the start number: ";
    cin>>a;
    cout<<"Enter the r of GP: "; cin>>r;
    cout<<"Enter the number of numbers: "; cin>>n;

    for(int i=1; i<=n; i++){
       cout<< a * pow(r,i-1);
       cout << endl;
    }

    return 0;
}

