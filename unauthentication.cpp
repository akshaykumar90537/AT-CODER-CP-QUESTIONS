#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,b;
    cin>>n;
    string a = "";
    b = 0;
    while(n--)
    {
        string s;
        cin>>s;
        if(s == "login" || s == "logout")
        {
            a = s;
        }
        if(a == "" && s == "private")
        {
            b++;
        }
        
        if(s == "private" && a == "logout") b++;
         
    }
    cout<<b<<endl;
   
return 0;
}