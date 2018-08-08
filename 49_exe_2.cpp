#include<iostream>
using namespace std;

int main(){

    
    // a+(b+c) and (a+b)+c evaluate to different vlues

    float a,b,c;
   
    b = 6.022E23;
    a = 1;
    c = 6.022E23;
   
    cout << a+(b+c) <<endl<< (a+b)+c;

  
    return 0;
}
