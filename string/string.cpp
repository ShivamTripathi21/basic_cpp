#include<iostream>
using namespace std;
/*************************
 *this library for string
 *implementation in c++
 *
 *created by: shivam
 *
 *************************/


int length(const char *cptr){
	int length = 0;
	while(cptr[length] != '\0') length++;
	return length;
}

void scopy(char *dest, const char *source, int start=0){
	/******************************
	 *precondition: length should be
	 *valid for copying char
	 ******************************/
	int i;
	for(i=0; source[i] != '\0'; i++){
		dest[start+i] = source[i];
	}
	//copy the \0 itself
	dest[start+i] = source[i];
}

class String{
	private:
		char *ptr;
	public:
		// member function to be added later
		String();
		String(const String &rhs);
		String(const char *rhs);
		void print()const;
		String operator +(const String &rhs)const;
		String & operator =(const char *rhs);
		String & operator =(const String rhs);		
};

String::String(){
	ptr = NULL;
}

String::String(const String &rhs){
	ptr = new char[length(rhs.ptr)+1];
	scopy(ptr, rhs.ptr);
}

String::String(const char *rhs){
	//n i sa length of the char string
	ptr = new char[length(rhs) + 1];
	scopy(ptr, rhs);
}
void String::print()const{
	if(ptr != NULL) cout<<ptr<<endl;
	else cout<<"NULL"<<endl;
}
String String::operator +(const String &rhs)const{
	String res;
	res.ptr = new char[length(ptr) + length(rhs.ptr) + 1];
	scopy(res.ptr, ptr);
	scopy(res.ptr, rhs.ptr, length(ptr));
	return res;
}
String & String::operator =(const char *rhs){
	delete[] ptr;
	ptr = new char[length(rhs) + 1];
	scopy(ptr, rhs);
	return *this;
}
String & String::operator =(const String rhs){
	if(&rhs == this) return *this; //self assignment
	delete[] ptr;
	ptr = new char[length(rhs.ptr) + 1];
	scopy(ptr, rhs.ptr);
	return *this;
}

int main(){

	String s,r;
	s = "my name is shivam tripathi";
	r = s;
	char ch[]=" not working ";
	r = r + " it is working";
	s = s + ch;
	s.print();
	r.print();

	return 0;
}
