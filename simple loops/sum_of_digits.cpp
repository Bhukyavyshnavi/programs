#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int rem,sum=0;
	while(n!=0){
		rem=n%10;
		sum+=rem;
		n/=10;
	}
	cout<<sum<<"\n";
	
}
