#include <bits/stdc++.h>
using namespace std;

int main()
{
   string a,b;
   cin>>a>>b;
  bool ans = true;
  for(int i=1;i<a.length();i++)
  {
    if(isupper(a[i]))
    {
         if(b.find(a[i-1]) == string::npos)
         {
            ans = false;
            break;
         }
    }
  }

  if(ans) cout<<"Yes"<<endl;
  else
  cout<<"No"<<endl;
return 0;
}