/**
 *   author:  TAMIM IQBAL
 *   created: 10/05/2024 20:36:51
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
        int a,b;
        cin>>a>>b;
        if(a>b)
        {
            cout<<b<<" "<<a<<endl;
        }
        else
        {
            cout<<a<<" "<<b<<endl;
        }
    }
    return 0;
}