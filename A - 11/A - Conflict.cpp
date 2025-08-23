#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    string t,a;
    cin>>t>>a;

    int count = 0;
    for(int i=0;i<n;i++)
    {
            if(t[i] == 'o' && a[i] == 'o') count++;
        
    }
    if(count > 0) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
return 0;
}