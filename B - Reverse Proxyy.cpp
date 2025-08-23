#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n,q;
    cin>>n>>q;
    vector<int>v(n,0);

    while(q--)
    {
        int a;
        cin>>a;
        if(a >= 1)
        {
            v[a-1]++;
           cout<<a<<" ";
        }
        else
        {
            auto min = min_element(v.begin(),v.end());
            int indx = min - v.begin();
            v[indx]++;
            cout<<indx+1<<" ";
        }
    }

    
    
return 0;
}