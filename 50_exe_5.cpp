#include<iostream>
using namespace std;

int main(){

    cout<<"Enter distance(in inches): ";
    int d;
    cin >> d;
 
    int miles, furlongs, yards, feet, inches;
    int remain;

    miles = d / (8*220*3*12);
    remain = d - miles * 8*220*3*12;

    furlongs = remain / (220*3*12);
    remain = remain - furlongs * 220*3*12;

    yards = remain / (3*12);
    remain = remain - yards * 3*12;

    feet = remain / 12;
    remain = remain - feet * 12;
    inches = remain;

    cout<<"Miles: "<<miles<<endl<<"Furlongs: "<<furlongs<<endl<<"Yards: "<<yards<<endl<<"Feet: "<<feet<<endl<<"Inches: "<<inches;
    cout<<endl;
    if(d == ((((8*miles + furlongs)*220 + yards)* 3 + feet)*12 + inches)){
         cout<<"Output satisfied"<<endl;
    }    

    return 0;
}
