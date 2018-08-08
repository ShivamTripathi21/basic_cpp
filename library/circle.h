#ifndef CIRCLE_H
#define CIRCLE_H
#include<iostream>
#include<cmath>
class point{
	public:
        double x;
        double y;
        public:
	point();
	point(double x, double y);
	point operator +(const point &p);
	bool operator ==(const point &p);
	double distanceFromPoint(const point &p);
	point sectionRatio(const point &p,int m, int n, bool);
	void printPoint();
};

class line{
	private:
	double a, b, c;
	double slope;
	public:
	line(){}
	line(double x, double y, double z):a(x),b(y),c(z){
		this->slope = -a/b;
		//nothing to write
	}
	line(const line &l):a(l.a),b(l.b),c(l.c){
		this->slope = -l.a/l.b;
		//nothing to write here
	}
	line &operator =(const line &l);
	line operator +(const line &l);
	line operator -(const line &l);
	bool isOnLine(const point &p);
	bool isOnLine(double,double);
	double valueOn(double,bool);
		

	void print(){
		std::cout<<a<<" "<<b<<" "<<c<<std::endl;
	}
};


class circle{
        private:
        point p;//center off the circle
        double r;//radius
        public:
        circle();
        circle(double);
        circle(double,double, double);
	circle(const circle &c);
        point getCenter();
	double getRadius();
	double distanceFromOrigin();
	double distanceFromCircle(const circle &c);
	circle & operator =(const circle &c);
	circle operator +(const circle &c);
	bool isCocentric(const circle &c);
	
};

#endif
