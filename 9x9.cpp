#include<bits/stdc++.h>
#include<string>
using namespace std;
main()
{
    string S;
    cin>>S;
    int len = S.length();
    int a = S[0] - '0';
    int b = S[len-1] - '0';
    cout<<a*b;
}