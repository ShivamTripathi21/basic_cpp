#include<iostream>
#include<cmath>
using namespace std;

int factorial(int n){
   if(n==0) return 1;
   else if(n==1) return 1;
   else return n * factorial(n-1);
}

int main(){

   cout<<"How many numbers are for aranging 1 to r: ";
   int r;
   cin>>r;

   int sum=0,t;
   for(int i=0; i<=r; i++){
      t = pow(-1,i) * (factorial(r)/factorial(i));
      sum = sum + t;
   }

   cout<<"number of ways in which the number 1 through "<< r <<" can  be arranged is: "<<sum<<endl;
   return 0;
}
