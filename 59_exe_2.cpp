#include<iostream>
#include<cmath>
using namespace std;

int main(){

    
    double mul=1;
    cout<<"Enter the number of terms: ";
    int n; cin>>n;

    float t=sqrt(2),k;

    for(int i=0; i<n; i++){
      
       k=t/2;       
       mul = mul * k;
       t = sqrt( 2 + t);
 
    }

    cout<<"Product of first "<<n<<" terms is: "<<mul<<endl;

    return 0;
}
