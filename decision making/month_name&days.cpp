#include<bits/stdc++.h>
using namespace std;
int main(){
	string m;
	cin>>m;
	if(m== "january" or m == "march" or m == "may" or m== "july" or m== "august"  or m=="octobor" or m=="december"){
		cout<<"31 days"<<"\n";
	}
	else if(m == "april" or m== "june" or m=="september" or m=="november"){
		cout<<"30 days"<<"\n";
	}
	else if(m=="feb"){
		cout<<"28 or 29 days"<<"\n";
	}
}
