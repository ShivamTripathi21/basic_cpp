#include<cmath>
#include "circle.h"

circle::circle():r(0.0){
		p.x = 0.0;
		p.y = 0.0;
                // circle have center origin and radius 0
        }
        
circle::circle(double radius):r(radius){
		p.x = 0.0;
		p.y = 0.0;
                //circle having origin as acenter and r radius
        }
circle::circle(double x, double y, double ra):r(ra){
		p.x = x;
		p.y = y;
                //circle having x,y center with ra radius
        }
circle::circle(const circle &c):p(point(c.p.x,c.p.y)),r(c.r){
	//nothing ot remain for copy
}
point circle::getCenter(){
	return p;	
}

double circle::getRadius(){
	return r;
}

double circle::distanceFromOrigin(){
	return sqrt(p.x * p.x + p.y * p.y);
}

circle & circle::operator =(const circle &c){
	if(&c == this) return *this;
	this->p = c.p;
	this->r = c.r;
	return *this;
}
circle circle::operator +(const circle &c){
	circle temp;
	temp.p = this->p + c.p;
	temp.r = this->r + c.r;
	return temp;
}
double circle::distanceFromCircle(const circle &c){
	return sqrt(pow(this->p.x - c.p.x,2) + pow(this->p.y - c.p.y,2));
}
bool circle::isCocentric(const circle &c){
	if(this->p == c.p) return true;
	else return false;
}


