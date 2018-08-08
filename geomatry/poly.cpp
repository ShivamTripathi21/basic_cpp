#include<iostream>
#include<cmath>
using namespace std;


class Poly{
	private:
	int n; //degree of polynomial
	float *cof;
	public:
	Poly();
	Poly(float *values, int degree);
	Poly(const Poly &p);
	void print();
	Poly operator +(const Poly &p);
	Poly operator -(const Poly &p);
	Poly operator *(const Poly &p);
	Poly operator *(const double t);
	Poly &operator =(const Poly &p);
};

Poly::Poly(){
	n = 0; // zero degree polynomial
	cof = NULL;
}
Poly::Poly(float *values, int degree):n(degree){
	cof = new float[degree + 1];
	for(int i=0; i<= degree; i++){
		cof[i] = values[i];
	}
}
Poly::Poly(const Poly &p){
	n = p.n;
	cof = new float[p.n + 1];
	for(int i=0; i<=p.n; i++){
		cof[i] = p.cof[i];
	}
}
void Poly::print(){
	for(int i=0,j=n; i<=n; i++,j--){
		cout<<cof[i]<<"X^"<<j<<" ";
	}
	cout<<endl;
}
Poly Poly::operator +(const Poly &p){
	Poly res;
	res.n = max(n, p.n);
	res.cof = new float[res.n + 1];
	
	for(int i=0; i<=res.n; i++){
		if(n < p.n) res.cof[i] = p.cof[i] + this->cof[i-(p.n - n)];
		else res.cof[i] = p.cof[i-(n- p.n)] + this->cof[i];
	}

	return res;
}
Poly Poly::operator -(const Poly &p){
	Poly res;
	res.n = max(n, p.n);
	res.cof = new float[res.n + 1];

	for(int i=0; i<=res.n; i++){
                if(n < p.n) res.cof[i] =  this->cof[i-(p.n - n)] - p.cof[i];
                else res.cof[i] =  this->cof[i] - p.cof[i-(n- p.n)];
        }	
	return res;
}
Poly Poly::operator *(const Poly &p){
	Poly res;
	float temp;
	res.n = n + p.n;
	res.cof = new float[res.n + 1];
	for(int i=0; i<=n; i++){
		for(int j=0; j<=p.n; j++){
			temp = this->cof[i] * p.cof[j];
			res.cof[i+j] = res.cof[i+j] + temp;
		}
	}
	return res;
}
Poly Poly::operator *(const double t){
	Poyl res;
	res.n = n;
	res.cof = new float[res.n + 1];
	for(int i=0; i<=n; i++){
		res.cof[i] = this->cof[i] * t;
	}
	return res;
}
Poly &Poly::operator =(const Poly &p){
	delete[] cof;
	this->n = p.n;
	this->cof = new float[p.n + 1];
	for(int i=0; i<=p.n; i++){
		this->cof[i] = p.cof[i];
	}
	return *this;
}


int main(){
	
	float a[]={3.4,5,6,7};
	float b[]={5,6,2};
	Poly p(a,3);
	Poly q(b,2);
	p.print();
	q.print();
	Poly r, s, t;
	r = p + q;
	s = p - q;
	t = p * q;
	r.print();
	s.print();
	t.print();
	return 0;
}
