#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        int count = 0;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            count += v[i];
        }
        sort(v.begin(),v.end());
        //cout<<count<<endl;
        for(int i=0; i<k; i++)
        {
            if(v[i]<4)
            {
                // int x = 7-v[i];
                // int y = x-v[i];
                // count += y;
                count += 7-(2*v[i]);
            }
        }
        cout<<count<<endl;
        // for(int c:v)
        // {
        //     cout<<c<<" ";
        // }
        // cout<<endl;
    }
    return 0;
}