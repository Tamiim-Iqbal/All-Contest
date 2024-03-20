//TLE
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a[n];
        long long mx = INT_MIN;
        long long s = 0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            mx = max(mx,a[i]);
            s += a[i];
        }
        //cout<<mx<<'\n';
        long long sum =0;
        for(int i=0; i<n; i++)
        {
            if(a[i]==mx)
            {
                sum = sum + (mx*2);
                break;
            }
            else
            {
                sum = sum+a[i];
            }
        }
        long long ans = max(sum,s);
        cout<<ans<<'\n';
    }
    return 0;
}