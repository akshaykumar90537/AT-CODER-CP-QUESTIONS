#include <bits/stdc++.h>
using namespace std;

int lowerbound(vector<int>&v,int n,int a)
{
    

    int i =0,j = n-1;
    int ans = 0;
    while(i<=j)
    {
        int mid = i+(j-i)/2;
        if(v[mid] >= a) 
        {
              ans = mid+1;
              j = mid-1;
        } 
        else
        {
            i = mid+1;
        }
    }
    return ans;
}
int main()
{

    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

 
    for(int i=1;i<n;i++)
    {
        v[i] = v[i]+v[i-1];
    }

    int m;
    cin>>m;
    while(m--)
    {
        int q;
        cin>>q;

        int x = lowerbound(v,n,q);
        if(x > 0) cout<<x<<endl;
        else
        {
            cout<<"-1"<<endl;
        }
    }
    
return 0;
}