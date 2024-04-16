/**
 *   author:  TAMIM IQBAL
 *   created: 10/04/2024 20:54:58
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
        int attack_A = 0;
        int def_A = 0;
        int attack_P = 0;
        int def_P = 0;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            attack_A += x;
        }
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            def_A += x;
        }
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            attack_P += x;
        }
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            def_P += x;
        }
        if(attack_A>attack_P && def_A >def_P) cout<<"A"<<'\n';
        else if(attack_A<attack_P && def_A<def_P) cout<<"P"<<'\n';
        else cout<<"DRAW"<<'\n';
    }
    return 0;
}