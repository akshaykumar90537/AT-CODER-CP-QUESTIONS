#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool chekprime(int n)
{
    if(n == 0||n == 1)
    {
        return false;
    }
       for(int i=2;i*i<=n;i++)
       {
          if(n%i == 0)
          {
            return false;
          }
       }
return true;
}
int main()
{
    int n;
    cin>>n;
 if(chekprime(n-2))
 {
    cout<<"2 "<<n-2;
 }
 else{
    cout<<"-1";
 }
return 0;
}