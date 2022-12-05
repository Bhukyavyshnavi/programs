#include<bits/stdc++.h>
using namespace std;
int main(){
	int sec;
	cin>>sec;
	int days = sec/(24*3600);
	sec %= (24 *3600);
	int hours = sec/3600;
	sec %= 3600;
	int min = sec/60;
	sec %= 60;
	int seconds = sec;
	cout<<days<<":"<<hours<<":"<<min<<":"<<seconds<<"\n";
}
