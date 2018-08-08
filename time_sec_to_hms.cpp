#include<iostream>
#include<cmath>
using namespace std;

int main(){

    double x=HUGE_VAL;
    cout << x << endl;

    cout <<"Give the duraton in seconds: ";
    int duration;
    cin >> duration;
 
    int hours, minutes, seconds;

    hours = duration/(60*60);
    minutes = (duration - hours * 60 * 60) / 60;
    seconds = duration % 60;
 
    cout<<"Hours: "<<hours<<endl<<"Minutes: "<<minutes<<endl<<"Seconds: "<<seconds<<endl;
  
    return 0;
}
