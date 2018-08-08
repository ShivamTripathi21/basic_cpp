#include<iostream>
#include<fstream>
using namespace std;

int main(){

	ifstream infile("input.txt");
	ofstream outfile("output.txt");
	int n;
	infile>>n;
	outfile<<n<<endl;

	return 0;

}

