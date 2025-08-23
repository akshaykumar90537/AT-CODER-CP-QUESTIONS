#include <bits/stdc++.h>
using namespace std;


 bool check(int n,string a)
 {
    if(n%2 == 0)  return false;

    if(a[n/2] != '/') return false;
    for(int i=0;i<n/2;i++)
    {
        if(a[i] != '1') return false;
    }

    for(int i=n/2 +1;i<n;i++)
    {
        if(a[i] != '2') return false;
    }
return true;
 }
int main()
{

    int n;
    cin>>n;
    string a;
    cin>>a;

    if(!check(n,a)) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
    
return 0;
}