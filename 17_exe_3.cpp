#include<iostream>
using namespace std;


class foo{
	public:
		double x, y;
};

double f(foo &f1, foo *f2, foo f3){
	double res = (f1.x - f2->x) * (f3.y - f2->y);

	f1.x = 20;
	f2->x = 30;
	f3.x = 40;
	return res;
}


int main(){

	foo p={0, 0}, q = {3, 4}, r = {4, 3};
	double s = f(p, &q, r);
	cout<< s <<" "<< p.x<<" "<<q.x<<" "<<r.x<<endl;	

	return 0;
}
