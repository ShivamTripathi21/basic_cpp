#include<iostream>
using namespace std;

int main(){
   // we'll use x as int,float and double type
   double x;
   x = 22/7; cout << x << endl;
   x = 22.0/7; cout << x << endl;
   x = 6.022E23 + 1 - 6.022E23; cout << x <<endl;
   x = 6.022E23 - 6.022E23 + 1; cout << x <<endl;
   x = 6.022E23 * 6.022E23; cout << x << endl;

   return 0;
}
