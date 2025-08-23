#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int t[2] = {1,2};
    int a[2] = {1,3};
    for(int i=0;i<2;i++)
    {
        if(t[i] == a[i])
        {
            if(s1 == "sick" && s2 == "sick")
            {
                cout<<"1";
                break;
            }
        }
        else if(t[i] != a[i]){
            if(s1 == "sick")
            {
                cout<<"2";
                break;
            }
            else if(s2 == "sick"){
                cout<<"3";
                break;
            }
            else{
                cout<<"4";
                break;
            }
            
        }  
    }
    return 0;
}