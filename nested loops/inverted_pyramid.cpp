#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=n;i>=1;i--){
		for(int j=0;j<n-i;j++){
			cout<<" ";
		}
		for(int k=i;k<=2*i-1;k++){
			cout<<"*";
		}
		for(int k=0;k<i-1;k++){
			cout<<"*";
	}
		cout<<"\n";
	}
}
