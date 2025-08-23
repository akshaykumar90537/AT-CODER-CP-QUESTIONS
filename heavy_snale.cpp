#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,count = 0,d;
   cin>>n;
   cin>>d;
   int wid[n];
   int len[n];
   for(int i=0;i<n;i++)
   {
    cin>>wid[i]>>len[i];
   }

    for(int i=1;i<=d;i++)
     {
      int ans = 0;

         for(int j=0;j<n;j++)
          {
             
             int len1 = len[j]+i;
             int we1 = len1*wid[j];
             ans = max(ans,we1);
             
          }
          cout<<ans<<endl;
     }
   
return 0;
}