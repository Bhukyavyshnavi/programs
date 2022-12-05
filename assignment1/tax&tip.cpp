#include<bits/stdc++.h>
using namespace std;
int main(){
	float a;
	cin>>a;
	cout<<"$"<<fixed<<setprecision(2)<<a<<"\n";
	cout<<"tax is : 0.18"<<"\n";
	cout<<"tip is : 0.05"<<"\n";
	cout<<"total is :"<<(a+(0.18*a)+(0.05*a))<<"\n";
}
