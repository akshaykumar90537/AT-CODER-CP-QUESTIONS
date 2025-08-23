#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n,count = 0 ;
    cin>>n;
    set<int>s;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        s.insert(a);
        count++;
    }
    cout<<s.size()<<endl;
    for(auto a:s)
    {
        cout<<a<<" ";
    }
return 0;
}