#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    vector<int>v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    int k;
    cin>>k;

    int count =0 ;
    for(auto a:v)
    {
        if(a >= k) count++;
    }

    cout<<count;
    

return 0;
}