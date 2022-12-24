#include<bits/stdc++.h>
using namespace std;

void isCollinear(int x1, int y1, int x2, int y2, int x3,int y3){
    if ((y3 - y2) * (x2 - x1) == (y2 - y1) * (x3 - x2))
    	cout << "true" << endl;
    else
        cout << "false" << endl;
}
int main()
{
    int x1, x2, x3, y1, y2 , y3 ;
    cin>>x1>>x2>>x3>>y1>>y2>>y3;
    isCollinear(x1, y1, x2, y2, x3, y3);
    return 0;
}
