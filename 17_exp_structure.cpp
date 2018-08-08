#include<iostream>
using namespace std;


struct Book{
	char title[50];	
	char author[50];
	double price;
	int accessionNo;
	bool borrowed;
	int borrowerNo;
};

struct Point{
	double x, y;
};

struct Disk{
	Point center;
	double radius;
};

struct Disk2{
	double radius;
	Point *cptr;
};



int main(){

	Book pqr, xyz;

	cout<<"Enter book name: ";
	cin.getline(pqr.title, 50);
	pqr.price = 365.89;
	pqr.accessionNo = 45454;
	cout<<"Enter the author name: ";
	cin.getline(pqr.author, 50);
	
	cout<<"\t\tBook details: "<<endl;
	cout<<pqr.title<<endl<<pqr.author<<endl<<pqr.price<<endl;

	cout<<endl<<endl<<endl<<endl;

	Disk d1;
	d1.center.x = 0.5;
	d1.center.y = 0.9;
	d1.radius = 4.5;

	Disk d2 = {{0.6,0.8},6.7};
	Disk d3 = d1;

	cout<<"D1: "<<d1.center.x<<" "<<d1.center.y<<" "<<d1.radius<<endl;
	cout<<"D2: "<<d2.center.x<<" "<<d2.center.y<<" "<<d2.radius<<endl;
	cout<<"D3: "<<d3.center.x<<" "<<d3.center.y<<" "<<d3.radius<<endl;

	const Disk d4 = {{1, 2},3};	

	//Array of structure
	
	Disk d[10];
	Book library[100];

	// d[5].center.x refer to x coordinate of the 6th circle

	// Pointers to Structures and ->

	Disk d5 = {{1,2}, 3}, *dptr;
	
	dptr = &d5;
	(*dptr).radius = 5;

	cout<< (*dptr).center.x <<endl<<" "<< (*dptr).center.y <<endl<<" "<< dptr->radius<<endl;

	// pointer as structure mamber

	Point p1 = {10.0, 20.0};
	Disk2 d6, d7;
	
	d6.radius = 8;
	d7.radius = 10;

	d6.cptr = &p1;
	d7.cptr = &p1;

	// if we will do this

	d6.cptr->y = 25; //it will change the y coordinate of p1 hence of the center of both the disk

	return 0;

}
