#include<iostream>
using namespace std;
int main(){
	int i, j, k, n;
    cin >>n;
    for(i = 1; i <=n; i++){
    	for(j = 1; j < i; j++){
            cout << " ";
        }
        for(k = i; k <= n; k++)
        {
            cout << "*"<< " ";
        }
        cout << "\n";
    }	

    for(i = n - 1; i >= 1; i--){
    	for(j = 1; j < i; j++){
            cout << " ";
        }
        for(k = i; k <= n; k++){
            cout << "*" << " ";
        }
        cout << "\n";
    }	
 	return 0;
}
