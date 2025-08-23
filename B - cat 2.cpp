    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {

        int n;
        cin>>n;
        vector<string>v(n);
        for(int i=0;i<n;i++)
        {
        cin>>v[i];
        }


        set<string> ans;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(j != i)
                {
                    ans.insert(v[i] + v[j]);
                }
            }
        }

        cout<<ans.size()<<endl;
    return 0;
    }