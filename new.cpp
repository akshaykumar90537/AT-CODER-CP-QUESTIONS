#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int self;
    set<pair<int,int>>uniq;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        if(u == v)
        {
            self++;
        }
        else{
            pair<int,int>abc = (u<v)?make_pair(u,v):make_pair(v,u);
            uniq.insert(abc);
        }
    }
    int out = m-uniq.size();
    cout<<out;
}