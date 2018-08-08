#include<iostream>
#include<cmath>
using namespace std;

void CartesianToPolar(double x, double y, double *pr, double *pt){
	*pr = sqrt(x*x + y*y);
	*pt = atan2(y,x);
}

int main(){

	double r, theta;
	CartesianToPolar(1.0, 1.0, &r, &theta);

	cout<<r<<" "<<theta<<endl;

	return 0;
}
