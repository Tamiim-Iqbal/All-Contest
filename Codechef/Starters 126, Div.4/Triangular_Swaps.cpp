//Only 1 test case pass
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
        vector<char>s;
        for(int i=0; i<n; i++)
        {
            char c;
            cin>>c;
            s.push_back(c);
        }
        sort(s.begin(),s.end());
        s.erase(unique(s.begin(),s.end()),s.end());
        int count =0;
        for(char a:s)
        {
            count++;
        }
        cout<<count<<'\n';
        
    }
    return 0;
}