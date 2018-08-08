#include<iostream>
#include<cmath>
using namespace std;

/***************************************
########################################


Created by : shivam tripathi
mail : stripathi3397@gmail.com

Library is for solving high lavel single variable 
calculas problem


########################################
***************************************/

class shape{
	protected:
		int x, y, z;
	
	protected:
		void shape(int *A, int n){
			if( n != 3){	
				x = A[0];
				y = A[1];
				z = A[2];
			}
			else{
				cout<<"Invalid shape";
			}
		}

	public:
		int *get_shape(){
			int *A = new int[3];
			A[0] = x;
			A[1] = y;
			A[2] = z;
			return A;
		}
		void print_shape(){
			cout<<"("<<x", "<<y<<", "<<z<<")";
		}
};

class constant:public shape{
	protected:
		double ***constant;
	public:
		constant(){
		
		}
		constant(double **A, int *A){
			
			double*** the_array = new double**[x];
    			for(int i=0; i < x; ++i){
        			the_array[i] = new double*[y];
				for(int j=0; j < y; ++j){
            				the_array[i][j] = new double[z];
					for(int k=0; k < z; ++k){
                				the_array[i][j][k]= 0.0;
           				 }
        			}
    			}
		}
};

class calculas{

	

};




int main(){

	return 0;
}
