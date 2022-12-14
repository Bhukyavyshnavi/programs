#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	float half=n/2;
	float p = pow(10,-12);
	while(abs(half*half) -n >p && abs(half*half)-n!=p){
		half= float((half + n/half))/2;
	}
	cout<<half<<"\n";
}
