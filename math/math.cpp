#include<iostream>
using namespace std;

class fun_polynomial{
	private:int fun_degree; //degree of function
	private:double *fun_cof;

	//ecah polynomial contain it's diffrential polynomial
	private:fun_polynomial *diff_of_fun;	

	public:
	fun_polynomial(){
		this->fun_degree = 0;
		//0 degree function only constant
		fun_cof = new double[1];
		fun_cof[0] = 0.0;
	}
	fun_polynomial(double input_constant): fun_degree(0){
		fun_cof = new double[1];
		fun_cof[0] = input_constant;
	}
	fun_polynomial(const double *input_array, int n){
		//polynomial is n degree
		this->fun_degree = n;
		fun_cof = new double[n+1];
		for(int i=0; i<n+1; i++){
			fun_cof[i] = input_array[i];
			//copy the element;
		}
	}
	//copy constructor
	fun_polynomial(const fun_polynomial *in_poly):fun_degree(in_poly->fun_degree)
	{       fun_cof = new double[in_poly->fun_degree + 1];
		for(int i=0; i < in_poly->fun_degree + 1 ; i++){
			fun_cof[i] = in_poly->fun_cof[i];
		}
	}
	void print(){
		for(int i=0, j=fun_degree; i<=fun_degree; i++,j--){
			if(j == 0){
				if(fun_cof[i] >= 0) cout<<"+"<<fun_cof[i];
				else{
					cout<<fun_cof[i];
				}
			}
			else if(j == fun_degree){
				if(fun_cof[i] > 0){
					cout<<fun_cof[i]<<".X^"<<j;
				}
				else if(fun_cof[i] == 0){
					//nothing printed
				}
				else{
					cout<<fun_cof[i]<<".X^"<<j;
				}
			}
			else{
				if(fun_cof[i] > 0) cout<<"+"<<fun_cof[i]<<".X^"<<j;
				else if(fun_cof[i] == 0){
                                        //nothing printed
                                }
				else cout<<fun_cof[i]<<".X^"<<j;
			}
		}
		cout<<endl;
	}
	void print_diff(){
		diff_of_fun->print();
	}
	/*fun_polynomial*/
	void differentiation(){
		if(this->fun_degree == 0){
			fun_polynomial *ans =  new fun_polynomial(0.0); 
			
			diff_of_fun = ans;
		}
		else{
			int diff_fun_degree = this->fun_degree - 1;
			fun_polynomial *ans;

			double *diff_fun_cof = new double[diff_fun_degree + 1];

			for(int i=0, j=fun_degree; i<=diff_fun_degree; i++,j--){
				diff_fun_cof[i] = this->fun_cof[i] * j;
			}
			ans = new fun_polynomial(diff_fun_cof, diff_fun_degree);
			diff_of_fun = ans;
		}
	}
};


int main(){
	
	double A[]={3,4,5,0,-8,9,0,6,-2};
	fun_polynomial fun(A,8);

	fun.print();
	fun.differentiation();
	fun.print_diff();

	return 0;
}
