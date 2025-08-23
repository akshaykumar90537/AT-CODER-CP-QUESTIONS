#include <bits/stdc++.h>
using namespace std;

int main()
{
   
    int r;
    cin>>r;
    int a = 400;
    if(a%r == 0)
    {
        cout<<(a/r)<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }
return 0;
}