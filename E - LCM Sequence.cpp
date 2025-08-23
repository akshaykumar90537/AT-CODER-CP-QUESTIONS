#include <bits/stdc++.h>
using namespace std;


long long gcd(long long a,long long b)
{
    if(b == 0) return a;
    return gcd(b,a%b);
}
long long lcm(long long a,long long b)
{
    return (a*b)/gcd(a,b);
}
int main()
{

    long long l,r;
    cin>>l>>r;

    unordered_set<long long>ans;

    long long result = 1;
    for(int i=2;i<l;i++)
    {
      result  =  lcm(result,i);
    }

    for(int i=l;i<=r;i++)
    {
        result = lcm(result,i);
        ans.insert(result);
    }

    cout<<ans.size()<<endl;
return 0;
}