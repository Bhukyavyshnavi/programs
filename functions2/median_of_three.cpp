#include<bits/stdc++.h>
using namespace std;
void median_of_three(int n1,int n2,int n3){
	if((n1<n2 && n1>n3) or (n1>n2 && n1<n3)){
		cout<<n1;
	} 
	else if((n2<n1 && n2>n3) or (n2>n1 && n2<n3)){
		cout<<n2;
	}
	else{
		cout<<n3;
	} 
}
int main(){
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	median_of_three(n1,n2,n3);
}
