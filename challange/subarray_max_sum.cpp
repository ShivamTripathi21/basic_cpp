#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

int maxSubArray(const vector<int> &A) {
    int maxsum = A[0] , cursum = A[0] ;
    for(int i=1;i<A.size();i++)
    {
        cursum = max(cursum+A[i],A[i]);
        maxsum = max(maxsum,cursum);
    }
    return maxsum ;
}

int main(){
	
	vector<int> v = {1,0,-2,4,2,-4,7,-7};

	cout<<maxSubArray(v)<<endl;

	return 0;
}
