#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
	for(int i=2;i<=n/2;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
	
}
int nextPrime(int n){
	int N=n;
	bool p = false;
	while(!p){
		N++;
		if(isPrime(N)){
			p=true;
		}
		
	}
	return N;
}
int main(){
	int n;
	cin>>n;
	cout<<nextPrime(n);
	
}
