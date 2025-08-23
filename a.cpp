#include <bits/stdc++.h>
using namespace std;

string palidrome(int n)
{
    string s(n,'-');
    if(n%2 == 0)
    {
        s[n/2 - 1] = '=';
        s[n/2] = '=';
    }
    else
    {
        s[n/2] = '=';
    }
    return s;
}
int main()
{
  int n;
  cin>>n;
  cout<<palidrome(n);
return 0;
}