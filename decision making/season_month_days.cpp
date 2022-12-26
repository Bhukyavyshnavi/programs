#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int n;
	cin>>s>>n;
	if(s == "january" or s== "feburary" ){
		if((s == "december" && n>21) or (s== "march" && n<20)){
			cout<<"winter"<<"\n";
		}
	}
	else if(s == "april" or s== "may" ){
		if((s == "march" && n>20) or (s== "june" && n<21)){
			cout<<"spring"<<"\n";
		}
	}
	else if(s == "july" or s== "august" ){
		if((s == "june" && n>21) or (s== "september" && n<22)){
			cout<<"summer"<<"\n";
		}
	}
	else if(s == "october" or s== "november" ){
		if((s == "september" && n>22) or (s== "december" && n<21)){
			cout<<"fall"<<"\n";
		}
	}
}
