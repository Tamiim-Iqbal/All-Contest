/**
 *   author:  TAMIM IQBAL
 *   created: 24/04/2024 21:47:15
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
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i]; // 1 2 4 128 130 131
            v[i]=v[i]%k; // 1 2 4 8 10 11
        }
        sort(v.begin(),v.end()); // 1 2 4 8 10 11
        int a = v[n-1]-v[0]; // 11 - 1 = 10
        for(int i=0; i<n-1; i++)
        {
            a = min(a,v[i]+k-v[i+1]); //8 (16-8)
        }
        cout<<a<<endl;
    }
    return 0;
}