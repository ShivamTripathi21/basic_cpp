#include<iostream>
using namespace std;

class Set{
	public:
	int *ptr;
	int n;  // number of integers in the set
	public:
	Set();
	Set(int *rhs, int n);
	void read();
	void print() const;
	Set & operator =(const Set &rhs);
};

Set::Set():n(0){
	ptr = NULL;
}
Set::Set(int *rhs, int n){
	this->n = n;
	ptr = new int[n];
	for(int i=0; i<n; i++)ptr[i] = rhs[i];
}
void Set::read(){
	cout<<"Enter the number of element in set: ";
	cin>>n;
	
	ptr = new int[n];
	for(int i=0; i<n; i++){
		cin>>ptr[i];
	}
}
void Set::print()const{
	cout<<"Elements of your set are "<<endl;
	for(int i=0; i<n; i++){
		cout<<ptr[i]<<" ";
	}
}

Set & Set::operator =(const Set &rhs){
	delete[] ptr;
	
	n = rhs.n;
	ptr = new int[n];
	for(int i=0; i<this->n; i++){
		ptr[i] = rhs.ptr[i];
	}
	return *this;
}

bool belongs(int x,const Set &s){
	if(s.ptr == NULL)return false;
	else{
		for(int i=0; i<s.n; i++){
			if(x == s.ptr[i])return true;
		}
		return false;
	}
}

Set Union(const Set &a,const Set &b){
	int maxSize = a.n + b.n;
	int *arr = new int[maxSize];
	int i,j;	
	for(i=0; i<a.n; i++){
		arr[i] = a.ptr[i];
	}
	for(i=0, j=a.n; i<b.n && j<maxSize; i++){
		if(belongs(b.ptr[i],a)){  
 			//do not do any thing
       		}
		else{
			arr[j] = b.ptr[i];
			j++;
		}
	}
	Set *s = new Set(arr,j);
	return *s;
}

int main(){
	
	int a[]={2,3,4,5,8,9};
	int b[]={4,10,9,5,11};
	Set c(a,6),d(b,5);
	c.print();
	cout<<endl;
	d.print();
	cout<<endl;
	Set e;
	e = Union(c, d);
	e.print();
	cout<<endl;

	return 0;
}
