#include<bits/stdc++.h>
using namespace std;
bool isInteger(string s){
	int i = 0, j = s.length() - 1;
    while (i < s.length() && s[i] == ' ')
        i++;
    while (j >= 0 && s[j] == ' ')
        j--;
 
    if (i > j)
        return true;
	if((s[0] == '+' or  s[0] == '-') && (s[i] >= '0' && s[i] <= '9' )){
    	return true;
    }
    if(s[i] >= '0' && s[i] <= '9'){
		return true;
	}
	else{
	return false;
}
}
int main(){
	string s;
	cin>>s;
	if(isInteger(s)){
		cout<<"valid"<<"\n";
	}
	else{
		cout<<"invalid"<<"\n";
	}
}

