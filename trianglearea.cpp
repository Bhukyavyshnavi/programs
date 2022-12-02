#include<bits/stdc++.h>
using namespace std;
int main(){
	float s1,s2,s3;
	cin>>s1>>s2>>s3;
	float s = (s1+s2+s3)/2;
	float a= sqrt(s*(s-s1)*(s-s2)*(s-s3));
	cout<<a<<"\n";
	return 0;
	
	
}
