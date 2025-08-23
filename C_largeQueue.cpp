    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {

        ios::sync_with_stdio(false);  
        cin.tie(NULL);    

        int q;
        cin>>q;

        deque<pair<int,long long>>A;

        while(q--)
        {
              int a;
            long long c,k,x;
            cin>>a;
            if(a == 1 )
            {
                cin>>c>>x;
            A.push_back(make_pair(x,c));
            }
            else
            {
                long long sum = 0;
                cin>>k;
                while(k > 0 && A.size() > 0)
                {
                   int val = A.front().first;
                   long long count  = A.front().second;
                    A.pop_front();

                    long long recive = min(count,k);
                    sum += val * recive;
                    k -= recive;

                    if(count > recive)
                    {
                        A.push_front(make_pair(val, count - recive));
                    }
                }
                cout<<sum<<endl;
            }
        }
    return 0;
    }