#include<bits/stdc++.h>
using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int sum = (n*(n+1))/2;
//	cout<<sum<<"\n";
//}

int main(){
	int n,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		sum=sum+i;
	}
	cout<<sum<<"\n";
	return 0;
}
