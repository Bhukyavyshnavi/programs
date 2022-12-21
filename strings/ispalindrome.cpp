#include<bits/stdc++.h>
using namespace std;
void isPalindrome(string& s){
	string r = string(s.rbegin(),s.rend());
//	r = reverse(s.begin(), s.end());
	if(s == r){
		cout<<"it is palindrome";
	}
	else{
		cout<<"not";
	}
}
int main(){
	string s;
	cin>>s;
	isPalindrome(s);
}
