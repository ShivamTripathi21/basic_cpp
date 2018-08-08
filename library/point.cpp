
#include "circle.h"

point::point(){}
point::point(double x, double y){
                this->x = x;
                this->y = y;
	}
point point::operator +(const point &p){
                point temp;
                temp.x = this->x + p.x;
                temp.y = this->y + p.y;
                return temp;
	}
bool point::operator ==(const point &p){
                if(x == p.x && y == p.y) return true;
                else return false;
	}
double point::distanceFromPoint(const point &p){
	return sqrt(pow(p.x - x, 2)+pow(p.y - y, 2));
}
point point::sectionRatio(const point &p, int m, int n, bool internal = true){
	point *temp = new point;
	if(internal){
		temp->x = (m*p.x + n*x)/(m+n);
		temp->y = (m*p.y + n*y)/(m+n);
		return *temp;
	}
	else{
		temp->x = (m*p.x - n*x)/(m+n);
                temp->y = (m*p.y - n*y)/(m+n);
		return *temp;
	}
}
void point::printPoint(){
	std::cout<<"("<<x<<", "<<y<<")"<<std::endl;
}
