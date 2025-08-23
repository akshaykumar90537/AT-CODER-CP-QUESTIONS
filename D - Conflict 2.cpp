#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n,q;
    string server = "";
    cin>>n>>q;
    vector<string>pcc(n+1);
    while(q--)
    {
        int typ,p;
        cin>>typ>>p;
        if(typ == 1)
        {
            pcc[p] = server;
        }

        else if(typ == 2)
        {
            string s;
            cin>>s;
            pcc[p] += s;
        }
        else if(typ == 3)
        {
            server = pcc[p];
        }

    }
    cout<<server<<endl;
return 0;
}