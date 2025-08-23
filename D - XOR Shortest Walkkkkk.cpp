#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n,m;
    cin>>n>>m;
    if(n!=m) cout<<"-1"<<endl;

    
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

     int ans = INT_MAX;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n-1; j++) {
            ans = min(ans, arr[i][2] ^ arr[j][2]); 
        }
    }

    cout << ans << endl;
return 0;
}