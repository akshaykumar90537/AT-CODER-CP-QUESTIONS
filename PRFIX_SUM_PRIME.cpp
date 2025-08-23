#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,two = 0,one = 0;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i] == 2)
        {
            two++;
        }
        else{
            one++;
        }
    }
if(two == 0)
{
    for(int i=0;i<one;i++) cout<<"1 ";
}
else if(one == 0)
{
    for(int i=0;i<two;i++) cout<<"2 ";
}
else{
    cout<<"2 1 ";
    for(int i=0;i<two-1;i++) cout<<"2 ";
    for(int i=0;i<one-1;i++) cout<<"1 ";
}
}
    
