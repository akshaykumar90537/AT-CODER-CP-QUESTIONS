    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {

        int n;
        cin>>n;
        vector<int>station(n);

        for(int i=0;i<n-1;i++)
        {
            cin>>station[i];
        }

        int sum = 0;
        for(int i=0;i<n-1;i++)
        {
            sum  = 0;
            for(int j=i;j<n-1;j++)
            {
                sum += station[j];
                cout<<sum<<" "; 
            }
            cout<<endl;
        }
    return 0;
    }