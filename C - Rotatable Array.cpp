#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n,q;
    cin>>n>>q;
    vector<int> v(n);

    for(int i=0;i<n;i++)
    {
        v[i] = i+1;
    }

    while(q--)
    {
        int a,p,x,k;
        cin>>a;
        if(a == 1)
        {
           cin>>p>>x;
           v[p-1] = x;
        }

        else if(a == 2)
        {
            cin>>p;
            cout<<v[p-1]<<endl;
        }
        else
        {
            cin>>k;
            for (int i = 0; i < k; ++i) {
            rotate(v.begin(), v.begin() + 1, v.end());
            }

        }
    }
return 0;
}