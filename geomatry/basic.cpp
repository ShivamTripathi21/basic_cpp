#include<iostream>
#include<cmath>
using namespace std;


class Point{
	private:
	double x,y;
	bool exist;
	public:
	Point(bool p);
	Point();
	Point(double p, double q);
	Point(const Point &p);
};
Point::Point(bool p){
	exist = p;
}
Point::Point():x(0.0),y(0.0){
	// set to coordinate
	exist =true;
}

Point::Point(double p, double q):x(p),y(q){
	// blank body
	exist = true;
}

Point::Point(const Point &p){
	this->x = p.x;
	this->y = p.y;
	exist = p.exist;
}


class Line{
	private:
	// three coffecient and constant
	float a, b, c;
	float m;
	public:
	Line();
	Line(float, float, float);
	float distance(Line &l);
	Point intersectAt(const Line &l);
};

Line::Line(){
	//set all coffecient to zero
	a = b = c = 0.0;
	m = 0.0;
}
Line::Line(float p, float q, float r){
	a = p;
	b = q;
	c = r;
	m = -(a/b);
}
float Line::distance(Line &l){
	return abs((c - l.c)/sqrt(a*a + b*b));
}
Point Line::intersectAt(const Line &l){
	if(m == l.m && this->distance(l) != 0){
		Point *p = new Point(false);
		return *p;
	}
	
}



int main(){

	return 0;
}
