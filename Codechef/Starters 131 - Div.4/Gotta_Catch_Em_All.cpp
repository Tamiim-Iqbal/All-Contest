/**
 *   author:  TAMIM IQBAL
 *   created: 24/04/2024 20:41:57
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
        int n,x,y;
        cin>>n>>x>>y;
        int d = y/x;
        //cout<<d<<endl;
        int count = 0;
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            if(a>d)
            {
                count += y;
            }
            else 
            {
                count += x*a;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}