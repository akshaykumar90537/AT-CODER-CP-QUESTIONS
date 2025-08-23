#include <bits/stdc++.h>
using namespace std;

int main()
{

    int x,y;
    cin>>x>>y;

    int count = 0;
    int count1 = 0;
    int count3 = 0;
    for(int i=1;i<=6;i++)
    {
        for(int j=1;j<=6;j++)
        {

             bool sum_cond = (i + j >= x);
            bool diff_cond = (abs(i - j) >= y);

            if (sum_cond) count++;
            if (diff_cond) count1++;
            if (sum_cond && diff_cond) count3++;
            
        }
    }
     double ans = ((count+count1)-count3)/36.0;
    cout<<fixed<<setprecision(9)<<ans;
return 0;
}