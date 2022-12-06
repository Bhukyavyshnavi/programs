#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	int n;
	cin>>str>>n;
	if(str=="december" && n>=22 || str=="january" && n<=19){
		cout<<"capricon"<<"\n";		
	}
	else if(str =="january" && n>=20 || str=="february" && n<=18){
		cout<<"aquaries"<<"\n";
	}
	else if(str =="february" && n>=19 || str=="march" && n<=20){
		cout<<"pisces"<<"\n";
	}
	else if(str =="march" && n>=21 || str=="april" && n<=19){
		cout<<"aries"<<"\n";
	}
	else if(str =="april" && n>=20 || str=="may" && n<=20){
		cout<<"taurus"<<"\n";
	}
	else if(str =="may" && n>=21 || str=="june" && n<=20){
		cout<<"gemini"<<"\n";
	}
	else if(str =="june" && n>=21 || str=="july" && n<=22){
		cout<<"cancer"<<"\n";
	}
	else if(str =="july" && n>=23 || str=="august" && n<=22){
		cout<<"leo"<<"\n";
	}
	else if(str =="august" && n>=23 || str=="september" && n<=22){
		cout<<"virgo"<<"\n";
	}
	else if(str =="september" && n>=23 || str=="october" && n<=22){
		cout<<"libra"<<"\n";
	}
	else if(str =="october" && n>=23 || str=="november" && n<=21){
		cout<<"scorpio"<<"\n";
	}
	else if(str =="november" && n>=22 || str=="december" && n<=21){
		cout<<"sagittarius"<<"\n";
	}
	else{
		cout<<"other"<<"\n";
	}
	
	
}
