#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;

    string ak(n,'-');

    if(n%2 == 0){
        ak[n/2 -1] = '=';
        ak[n/2] = '=';
    }
    else
    {
        ak[n/2] = '=';
    }

    cout<<ak<<endl;
return 0;
}