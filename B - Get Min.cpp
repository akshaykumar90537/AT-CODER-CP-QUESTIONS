#include <bits/stdc++.h>
using namespace std;

int main()
{
   
    int t;
    cin>>t;
    vector<int>v;
    while(t--)
    {
        int a;
        cin>>a;
        if(a == 1)
        {
          int x;
          cin>>x;
          v.push_back(x);
        }
        else{
           int y = *min_element(v.begin(),v.end());
           cout<<y<<endl;
           v.erase(find(v.begin(),v.end(),y));
        }
    }
return 0;
}