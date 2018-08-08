#include<iostream>
#include<map>
using namespace std;

void next_num(int *A, int n){
	map<int, int>hash_map;
	for(int i=0; i<n; i++){
		map<int, int>::iterator pi = hash_map.find(A[i]);
		if(hash_map.count(A[i]) > 0){
			//hash_map[A[i]] = has_map[A[i]] + 1;
			hash_map.insert(pair<int, int>(A[i],hash_map[A[i]]+1));
		}
		else{
			hash_map.insert( pair<int,int>(A[i],1));
		}
	}

	map<int,int>::iterator pi = hash_map.begin();
	while(pi != hash_map.end()){
		cout<<pi->first<<" , "<<pi->second<<endl;
	}

}

int main(){
	int A[]={2,3,4,5,3,4,2,2,7};
	
	next_num(A,9);
	return 0;
}
