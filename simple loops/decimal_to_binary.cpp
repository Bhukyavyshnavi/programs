#include<bits/stdc++.h>
using namespace std;
int main(){
	int q, r = 0, rem, product = 1;
	cin >> q;
	while (q >0) {
	    rem = q % 2;
	    r = r + (rem * product);
	    q = q / 2;
	    product *= 10;
	}
	cout << "binary form : " << r;
	return 0;
}
