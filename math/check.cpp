#include<iostream>
using namespace std;


int * get_shape(){
                        int *A = new int[3];
                        A[0] = 2;
                        A[1] = 2;
                        A[2] = 5;
                        return A;
                }


int main(){

	int *B;
	B = get_shape();	
	cout<<B[0];	

	return 0;
}
