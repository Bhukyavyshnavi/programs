#include<bits/stdc++.h>
using namespace std;
bool isPerfect(int n){
	int sum=0;
	for(int i=1;i<n;i++){
		if(n%i ==0){
			sum+=i;
		}
	}
	if(sum == n){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	for(int i=1;i<=10000;i++){
		if(isPerfect(i)== true){
			cout<<i<<"\n";
		}
	}
}

