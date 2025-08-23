#include <bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
vector<int>arr(t);
int count = 0;
for(int i=0;i<t;i++)
{
    cin>>arr[i];
}
for(int i=1;i<t;i++)
{
    if(arr[i] <= arr[i-1])
    {
        count++;
    }
}
if(count == 0) cout<<"Yes";
else  cout<<"No";
return 0;
}