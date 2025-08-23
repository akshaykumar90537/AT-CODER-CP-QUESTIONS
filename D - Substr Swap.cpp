#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n,m;
    cin>>n>>m;
    string S,T;
    cin>>S>>T;
    vector<int>swapneed(n+1,0);

    while(m--)
    {
        int l,r;
        cin>>l>>r;
         
        swapneed[l-1] ^= 1;
        swapneed[r] ^= 1;

    }
    int toggle = 0;
    for(int i=0;i<n;i++)
    {
       toggle ^= swapneed[i];
       if(toggle) swap(S[i],T[i]);
    }
    cout<<S<<endl;
return 0;
}