#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
	for(int i=2;i<=n/2;i++){
		if(n%i ==0){
			return false;
			break;
	}
	return true;
}
}

int main(){
	int n;
	cin>>n;
    if(isPrime(n)){
		cout<<"it is prime";
	}
	else{
		cout<<"it is not prime";
	}
}
	

