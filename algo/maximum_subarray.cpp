#include<iostream>
#include<cmath>
using namespace std;


void find_max_cross_subarray(double *A, int low, int mid, int high, int &maxLeft, int &maxRight, double &crossSum){
	double left_sum = -HUGE_VAL;
	double sum = 0;
	for(int i=mid; i>=low; i--){
		sum = sum + A[i];
		if(sum > left_sum){
			left_sum = sum;
			maxLeft = i;
		}
		else break;
	}
	double right_sum = -HUGE_VAL;
	sum = 0;
	for(int j=mid+1; j<=high; j++){
		sum = sum + A[j];
		if(sum > right_sum){
			right_sum = sum;
			maxRight = j;
		}
		else break;
	}
	crossSum = left_sum + right_sum;
}

void maximum_subarray(double *A, int low, int high, int &leftIndex, int &rightIndex, double &sum){
	if(low == high){
		leftIndex = low;
		rightIndex = high;
		sum = low; // or high because in this case array has only one element
	}
	else{
		int mid = (low + high) / 2;
		maximum_subarray(A, low, mid, left_low, left_high, left_sum);
		maximum_subarray(A, mid+1, high, right_low, right_high, right_sum);
		find_max_cross_subarray(A, low, mid, high, cross_low, cross_high, cross_sum);
		if(left_sum >= right_sum && left_sum >= cross_sum){
			leftIndex = left_low; rightIndex = left_high; sum = left_sum;
		}
		else if(right_sum >= left_sum && right_sum >= cross_sum){
			leftIndex = right_low; rightIndex = right_high; sum = right_sum;
		}
		else{
			leftIndex = cross_low; rightIndex = cross_high; sum = cross_sum;
		}
	}
	
}


int main(){

	double A[16] = {13,-30,25,20,-3,-16,-23,18,20,-7,12,-5,-22,15,-4,7};

	int a,b;
	double sum;
	maximum_subarray(A,0,15,a,b,sum);
	cout<<"i : "<<a<<", j : "<<b<<", sum : "<<sum<<endl;		

	return 0;
}
