#include<iostream>
using namespace std;
int main()
{
    int n, space;
    cin>>n;
    space =n-1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=space; j++)
            cout<<" ";
        space--;
        for(int j=1; j<=(2*i-1); j++)
            cout<<"*";
        cout<<"\n";
    }
    space = 1;
    for(int i=1; i<=(n-1); i++)
    {
        for(int j=1; j<=space; j++)
            cout<<" ";
        space++;
        for(int j=1; j<=(2*(n-i)-1); j++)
            cout<<"*";
        cout<<"\n";
    }
    cout<<"\n";
    return 0;
}
