/**
 *   author:  TAMIM IQBAL
 *   created: 03/04/2024 20:39:52
**/
/**  When I wrote this code,
 *   only Allah and I knew what I did.
 *   Now, only Allah knows.
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
        int n,l,r;
        cin>>n>>l>>r;
        int a[n];
        int happy = 0;
        int mn = 0;
        int mx = 0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            if(a[i]>=l && a[i]<=r)
            {
                happy++;
                mx = max(mx,happy);
            }
            else 
            {
                happy--;
                mn = min(mn,happy);
            }
        }
        cout<<mx<<" "<<mn<<'\n';
    }
    return 0;
}








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
        int a[n+1];
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        sort(a+1,a+1+n);
        int r = 0;
        for(int i = 1; i <= n; ++i)
        {
            // int v = a[i];
            // if(v != i)
            // {
            //     if(v > i) r += (v - (i-1));
            //     else if(v < i) r += ((i-1) - v);
            // }
            r += abs((i-1)-a[i]);
        }
        cout<<r<<'\n';
    }
    return 0;
}
