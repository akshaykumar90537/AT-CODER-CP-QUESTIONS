#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
#define pb push_back
#define mp make_pair
//#define int long long
//#define endl 
const int N = 1000000007;
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);

vector<int>arr(5);
for(int i=0;i<5;i++){
    cin>>arr[i];
}
if(is_sorted(arr.begin(),arr.end())){
    cout<<"No"<<endl;
}
for(int i=1;i<=5;i++)
{
    swap(arr[i-1],arr[i]);
    if(is_sorted(arr.begin(),arr.end())){
        cout<<"Yes"<<endl;
        return 0;
    }
    swap(arr[i-1],arr[i]);
}

return 0;
}
