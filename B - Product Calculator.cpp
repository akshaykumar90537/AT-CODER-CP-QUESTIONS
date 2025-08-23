#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n,k;
    int a;
    long long ans = 1;
    cin>>n>>k;
    if(k > 18) 
    {
        cout<<"1"<<endl;
        return 0;
    }

    long long limit = 1;
     for (int i = 0; i < k; i++) {
    limit *= 10;
    }

    while(n--)
    {
        cin>>a;
         ans *= a;
            if(ans >= limit) 
        {
            ans = 1;
            
        }
        
    }
   cout<<ans;
        
return 0;
}