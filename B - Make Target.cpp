#include <bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
int arr[n][n];

for(int i=0;i<n;i++)
{
    for(int j=n+1-i;j<n;j++)
    {
        if(i<=j)
        {
            if(i%2 == 0)
            {
                cout<<".";
            }
            else cout<<"#";
            
        }
    }
    cout<<"\n";
}
return 0;
}