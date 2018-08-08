#include<iostream>
using namespace std;

int main(){
 
    //input a,d,n of arithmatice series
  
    int a,d,n;
    cout<<"Enter the start number: ";
    cin>>a;
    cout<<"Enter the d of AP: "; cin>>d;
    cout<<"Enter the number of numbers: "; cin>>n;

    for(int i=1; i<=n; i++){
       cout<< a + (i-1) * d;
       cout << endl;
    }

    return 0;
}
