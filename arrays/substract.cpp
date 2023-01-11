#include <iostream>
#include <string>
#include <cstdlib>
#include <cassert>

using namespace std;

string sub(string first, string second) {
	int flen = first.length();
	int slen = second.length();
	string res = "";
	int barrow = 0;
	for (int i = flen - 1, j = slen - 1; i >= 0 || j >= 0; --i, --j) {
		int fdigit = i < 0 ? 0 : first[i] - '0';
		int sdigit = j < 0 ? 0 : second[j] - '0';
		if(fdigit + barrow < sdigit){
			int temp = fdigit+barrow+10 -sdigit;
			barrow = -1;
			res = (char) (temp + '0') + res;
		}
		else{
			int temp = fdigit+barrow -sdigit;
			barrow = 0;
			res = (char) (temp + '0') + res;
			
		}
	}
	return res;
}
int main() {
	string s1, s2;
	cin >> s1;
	cin >> s2;
	cout << sub(s1, s2);
}
