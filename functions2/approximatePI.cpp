#include<bits/stdc++.h>
using namespace std;
double approximatePI(int n){
	double a=0;
	for(int i=1;i<=n;i++){
		if(i%2 !=0){
			a = a + 1.0/((2*i)*(2*i+1)*(2*i+2));
		}
		else{
			a= a - 1.0/((2*i)*(2*i+1)*(2*i+2));
		}
	}
	cout<<3 + 4.0*a;

}
int main(){
	int n;
	cin>>n;
	approximatePI(n);
	return 0;
}
