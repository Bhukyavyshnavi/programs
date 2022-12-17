#include<bits/stdc++.h>
using namespace std;

void getHypotenuse(int a,int b){
	cout<<(sqrt(pow(a,2)+pow(b,2)));
}
int main(){
	int a,b;
	cin>>a>>b;
    getHypotenuse(a,b);
	return 0;
}
