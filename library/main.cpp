#include<iostream>
#include"circle.h"

using namespace std;

int main(){
	
	point p(1, 2),q(-2, 1),r;
	r = p.sectionRatio(q,4,9,false);
	r.printPoint();

	line l(2,3,4);
	l.print();
	cout<<endl<<l.isOnLine(p)<<endl;

	return 0;
}
