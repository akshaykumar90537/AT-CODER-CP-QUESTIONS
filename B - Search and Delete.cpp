#include <bits/stdc++.h>
using namespace std;


void Binary(vector<int> &A,int tar)
{

    int i  = 0,j = A.size()-1;
    
    while(i<=j)
    {
        int mid = i+(j-i)/2;

        if(A[mid] == tar)
        {
           A.erase(A.begin()+mid);
           return;  
        } 
        else if(A[mid] > tar) j = mid-1;
        else i = mid+1;
    }
}
int main()
{

    int a,b;
    cin>>a>>b;

    vector<int>A(a),tar(b);

    for(int i =0;i<a;i++)
    {
        cin>>A[i];
    }

   
    for(int i =0;i<b;i++)
    {   
        cin>>tar[i];
         Binary(A,tar[i]);
    }
 

    for( auto ele : A)
    {
        cout<<ele<<" ";
    }

return 0;
}