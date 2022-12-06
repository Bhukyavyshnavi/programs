#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n>380 && n<450){
		cout<<"violet"<<"\n";
	}
	else if(n>450 && n<495){
		cout<<"Blue"<<"\n";
	}
	else if(n>495 && n<570){
		cout<<"Green"<<"\n";
	}
	else if(n>570 && n<590){
		cout<<"Yellow"<<"\n";
	}
	else if(n>590 && n<620){
		cout<<"Orange"<<"\n";
	} 
	else if(n>620 && n<750){
		cout<<"Red"<<"\n";
	}
	else{
		cout<<"no color"<<"\n";
	}
}
