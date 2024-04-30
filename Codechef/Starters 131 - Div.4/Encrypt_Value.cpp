/**
 *   author:  TAMIM IQBAL
 *   created: 24/04/2024 21:20:50
**/
#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
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
        vector<long long>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        long long s = v[0];
        for(int i=1; i<n; i++)
        {
            if(s*v[i] >= s+v[i])
            {
                s *= v[i];
                s %= MOD;
            }
            else
            {
                s += v[i];
                s %= MOD;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}