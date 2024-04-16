/**
 *   author:  TAMIM IQBAL
 *   created: 10/04/2024 21:08:25
**/
#include<bits/stdc++.h>
using namespace std;
bool isInteger(double number) 
{
    return abs(number - round(number)) < 1e-9; 
}
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
        int count = 0;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            if(x==2) count++;
        }
        if(count%8 == 0) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0;
}