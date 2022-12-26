#include <bits/stdc++.h>
using namespace std;
int val(char c){
	if (c >= '0' && c <= '9')
		return (int)c - '0';
	else
		return (int)c - 'A' + 10;
}

int toDeci(string str, int base){
	int len = str.size();
	int power = 1;
	int n = 0;
	for (int i = len - 1; i >= 0; i--) {
		if (val(str[i]) >= base) {
			printf("Invalid Number");
			return -1;
		}
		n += val(str[i]) * power;
		power = power * base;
	}

	return n;
}
char reVal(int n)
{
	if (n >= 0 && n <= 9)
		return (char)(n + '0');
	else
		return (char)(n - 10 + 'A');
}

string fromDeci(int base, int n)
{
	string res = "";
	while (n > 0) {
		res += reVal(n % base);
		n /= base;
	}
	reverse(res.begin(), res.end());

	return res;
}

void convertBase(string s, int a, int b)
{
	int num = toDeci(s, a);
	string ans = fromDeci(b, num);
	cout << ans;
}


int main()
{
	string s;
	cin>>s;
	int a , b;
	cin>>a>>b;
	convertBase(s, a, b);

	return 0;
}

