#include<bits/stdc++.h>
using namespace std;
int main(){
	char ch;
	int n;
	cin>>ch>>n;
	if(ch == 'a' && ch == 'c' && ch=='e' && ch=='g'){
		if(n%2 == 0){
			cout<<"white"<<"\n";
		}
		else{
			cout<<"black"<<"\n";
		}
	}
	else{
		if(n%2 ==0){
			cout<<"black"<<"\n";
		}
		else{
			cout<<"white"<<"\n";
		}
	}
}
