#include<bits/stdc++.h>
using namespace std;
bool isValidTriangle(int s1,int s2,int s3){
	if(s1 >= (s2+s3) || s2 >=(s1+s3) || s3 >=(s1+s2)){
		return false;
	}
	else if(s1 <=0 || s2<=0 ||s3<=0){
		return false;
	}
	else{
		return true;
	}
}
int main(){
	int s1,s2,s3;
	cin>>s1>>s2>>s3;
	if(isValidTriangle(s1,s2,s3)){
		cout<<"valid";
	}
	else{
		cout<<"invalid";
	}
}
