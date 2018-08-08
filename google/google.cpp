#include<iostream>
#include<string>

using namespace std;

/*
int Flips(string s, int k){
	int count=0;
	for(int i=0; i<s.length(); i++){
		if(s[i] == '+') continue;
		else{
			for(int j=i; j<i+k; j++){
				if(s[j] == '+') s[j] = '-';
				if(s[j] == '-') s[j] = '+';
			}
			count++;
		}
	}
	return count;
}*/

void Flip(){
	string s;
	getline(cin,s);
	int k;
	cin>>k;
	int N = s.length();
	int count = 0;
	for(int i=0; i+k-1<N; i++) if(s[i] == '-'){
		for(int j=0; j<k; j++)
			s[i+j] = s[i+j]^'-'^'+';
		count++;
	}
	for(int i=0; i<N; i++){
		if(s[i] == '-')	count=-1;
	}
	if(count == -1){
 		cout<<"IMPOSSIBLE"<<endl;
	}
	else{
		cout<<count<<endl;
	}
	
}


int main(){
	
	/*freopen("file.in", "r", stdin);
        freopen("file.out", "w", stdout);*/
	int n;
	cin>>n;
	int t=n;
	while(t--)
	{
		cout<<"Case #"<<n-t<<": ";
		Flip();
		
	}
/*	for(int i=1; i<=n; i++){
		cout<<"Case #"<<i<<": ";
		Flip();
	}*/

	//string s="---+-++-";
//	Flip();
	
	return 0;
}
