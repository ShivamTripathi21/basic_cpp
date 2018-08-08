#include<iostream>
#include<cmath>
using namespace std;

int main(){

	int n;
	cout<<"Enter the how many sides are in polygon: ";
	cin>>n;

	float x, y , xi, yi, t, sum=0.0, p, q;
	cout<<"Enter the 1st X coordinate: ";
        cin>>x;
        cout<<"Enter the 1st Y coordinate: ";
        cin>>y;
	p = x;
	q = y;

	for(int i=1; i<n; i++){
		cout<<"Enter the "<< i+1 <<" X coordinate: ";
		cin>>xi;
		cout<<"Enter the "<< i+1 <<" Y coordinate: ";
		cin>>yi;
		
		t = sqrt(pow(x-xi , 2) + pow(y-yi , 2));	
		x = xi;
		y = yi;	
		sum = sum + t;
	}
	sum = sum + sqrt(pow(p-xi , 2) + pow(q-yi , 2));

	cout<<"Perimeter of the given polygon is: "<<sum<<endl;

	return 0;
}
