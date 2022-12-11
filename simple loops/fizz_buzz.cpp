#include<bits/stdc++.h>
using namespace std;
int main(){
	int i;
	for(i=0;i<=100;i++){
		if(i%3==0 && i%5==0){
			cout<<"FIZZ BUZZ"<<"\n";
		}
		else if(i%3==0){
			cout<<"FIZZ"<<"\n";
		}
		else if(i%5==0){
			cout<<"BUZZ"<<"\n";
		}
		else{
			cout<<i<<"\n";
		}
	}
	
}
