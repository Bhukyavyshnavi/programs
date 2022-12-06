#include<bits/stdc++.h>
using namespace std;
int main(){
	char alph;
	cin>>alph;
	if(alph == 'a' or alph== 'e' or alph== 'i' or alph== 'o' or alph == 'u'){
		cout<<"entered letter is vowel"<<"\n";
	}
	else if(alph == 'y'){
		cout<<"sometimes y is vowel and sometimes y is consonent"<<"\n";
	}
	else{
		cout<<"entered letter is consonent"<<"\n";
	}
}
