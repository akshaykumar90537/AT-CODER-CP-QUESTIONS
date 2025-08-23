#include <bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
int arr[t];
int count = 0;
for(int i=0;i<t;i++)
{
    cin>>arr[i];
}
for(int i=0;i<t;i++)
{
    for(int j=i+1;j<t;j++)
    {
       if(arr[i] == arr[j]){
        int ans = j-i;
        cout<<ans+1;
        return 0;
      }
    }
}
    cout<<"-1";

return 0;
}