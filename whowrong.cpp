#include <bits/stdc++.h>
using namespace std;

int main()
{
int n,m;
cin>>n>>m;
set<int>s;
for(int i=1;i<=n;i++)
{
    s.insert(i);
}
int arr[m];
for(int i=0;i<m;i++)
{
    cin>>arr[i];
    s.erase(arr[i]);
}
cout<<(n-m)<<"\n";
for(auto num:s)
{
    cout << num << " ";
}
return 0;
}
