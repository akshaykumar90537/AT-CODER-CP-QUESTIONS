#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,m;
   cin>>n>>m;
   long long  x = 1,a = 1;
   for(int i=1;i<=m;i++)
   {
    a *= n;
    x += a;
    if(x > 1e9) {
        cout<<"inf"<<endl;
        return 0;
    }
   }
   cout << x << endl;
return 0;
}