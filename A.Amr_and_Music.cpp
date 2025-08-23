#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;

    long long arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        v.push_back({arr[i],i+1});
    }
    
    sort(v.begin(), v.end());
      vector<int> indexx;
    for(int i=0;i<n;i++)
    {
        if(v[i].first <= k)
        {
           indexx.push_back(v[i].second);
           k-=v[i].first;
        }
        else{
            break;
        }
    }

    cout<<indexx.size()<<"\n";
    for(int i=0;i<indexx.size();i++)
    {
        cout<<indexx[i]<<" ";
    }
    return 0;
}