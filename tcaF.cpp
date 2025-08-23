#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int X;
    cin>>X;
    long long int mul = 1,count = 0;
   for(int i=1;i<=X;i++)
   {
     mul = mul*i;
    count++;
    if(mul == X)
     break;
   }
   cout<<count;
   return 0;
}