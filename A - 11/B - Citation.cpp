#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    int arr[n];
    int ans = 0;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int x=0;x<n;x++)
    {
        int count  = 0;
        for(int i=0;i<n;i++)
        {
          if(arr[i] >= x) count++;
        }
        
    }
   -
    
cout<<ans;

    
    
return 0;
}