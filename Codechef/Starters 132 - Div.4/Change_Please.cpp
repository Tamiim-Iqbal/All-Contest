/**
 *   author:  TAMIM IQBAL
 *   created: 01/05/2024 20:32:59
**/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    double t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        x = 100-x;
        int last_digit = x%10;
        x -= last_digit;
        cout<<x<<endl;
    }
    return 0;
}