#include "circle.h"
line &line::operator =(const line &l){
	this->a = l.a;
	this->b = l.b;
	this->c = l.c;
	return *this;
}
line line::operator +(const line &l){
	line temp;
	temp.a = this->a + l.a;
	temp.b = this->b + l.b;
	temp.c = this->c + l.c;
	return temp;
}

line line::operator -(const line &l){
	line temp;
	temp.a = this->a - l.a;
	temp.b = this->b - l.b;
	temp.c = this->c - l.c;
	return temp;
}
bool line::isOnLine(const point &p){
	if(a * p.x + b * p.y == -c) return true;
        else return  false;
}
bool line::isOnLine(double x, double y){
	return a*x + b*y == -c;
}
double line::valueOn(double x,bool xis=true){
	if(xis) return -(c + a*x)/b;
	else return -(c + b*x)/a;
}

