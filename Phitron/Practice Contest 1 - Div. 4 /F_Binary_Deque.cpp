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
        int n,s;
        cin>>n>>s;
        int a[n];
        int sum = 0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            sum += a[i];
        }
        if(sum==s) cout<<"0"<<'\n';
        else if(sum<s) cout<<"-1"<<'\n';
        else
        {
            
        }

    }
    return 0;
}