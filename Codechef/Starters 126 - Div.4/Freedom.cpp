//Wrong Ans
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
        long long ar[n];
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
        }
        int i=0;
        int j=1;
        int ans = 0;
        while(i<n-1)
        {
            long long a = abs(ar[i]-ar[j]);
            long long b = ar[i]+ar[j];
            long long c = ar[i]*ar[j];
            if(a-b == b-c)
            {
                ans++;
            }
            i++;
            j++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}