#include <bits/stdc++.h>
using namespace std;
int main()
{
  long b, d= 0, j=1, rem;
	cout << " Input a binary number: ";
	cin>>b;
  while (b!= 0) 
  {
   rem = b% 10;
   d= d+ rem*j;
   j = j * 2;
   b= b/ 10;
  }
  cout<<" The decimal number: " << d<<"\n";
} 
