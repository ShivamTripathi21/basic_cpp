#include<iostream>
#include "functions.h"
using namespace std;

bool math::isodd(int m){
	if( m%2 == 0)return false;
	else return true;
}

int math::posi(int m){
	if(m > 0)return m;
	else return -m;
}
