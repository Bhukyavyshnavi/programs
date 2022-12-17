#include<bits/stdc++.h>
using namespace std;
bool checkPassword(string& s){
	int n= s.length();
	bool hasupper=false;
	bool haslower=false;
	bool digit=false;
	for(int i=0;i<n;i++){
		if(isupper(s[i])){
		    hasupper = true;
		}
		if(islower(s[i])){
			haslower=true;
		}
		if(isdigit(s[i])){
			hasdigit=true;
		}
}
	if(hasupper && haslower && digit && (n>=8)){
		return true;
	}
	else{
		return false;
	}

//for(int i=0;i<n;i++){
//    if(isupper(s[i]) && islower(s[i]) && isdigit(s[i]) && (n>=8)){
//	    return true;
//}
//    else{
//	    return false;
//	}
//}
}
int main(){
	string s;
	cin>>s;
	if(checkPassword(s)){
		cout<<"good";
	}
	else{
		cout<<"bad";
	}
}
