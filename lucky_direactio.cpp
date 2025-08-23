#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string d;
    cin>>d;
    if(d == "N") cout<<"S";
    else if(d == "S") cout<<"N";
    else if(d == "E") cout<<"W";
    else if(d == "W") cout<<"E";
    else if(d == "NE") cout<<"SW";
    else if(d == "SW") cout<<"NE";
    else if(d == "NW") cout<<"SE";
    else cout<<"NW";
return 0;
}