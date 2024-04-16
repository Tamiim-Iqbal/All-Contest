/**
 *   author:  TAMIM IQBAL
 *   created: 03/04/2024 20:53:38
**/

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
        int n;
        cin>>n;
        vector<long long>a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        long long r = 0;
        for(int i = 0; i < n; i++)
        {
            int v = a[i];
            if(v != i)
            {
                if(v > i) r += v - i;
                else if(v < i) r += i - v;
            }
        }
        cout<<r<<'\n';
    }
    return 0;
}

