#include<bits/stdc++.h>
using namespace std;
int main(){
	string text;
	cin>>text;
	string result = "";
    for (int i = 0; i < text.length() ; i++) {
        if (isupper(text[i]))
            result += char(int(text[i] + 3  - 65) % 26 + 65);
        else
            result += char(int(text[i] + 3 - 97) % 26 + 97);
    }
    cout<<result;
}

