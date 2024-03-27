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
        int a,b;
        cin>>a>>b;
        int count = 0;
        if(a-10 > b) cout<<count<<'\n';
        else 
        {
            while(a-10<b)
            {
                a = a+3;
                count++;
            }
            cout<<count<<'\n';
        }
    }
    return 0;
}