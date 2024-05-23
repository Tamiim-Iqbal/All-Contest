// /**
//  *   author:  TAMIM IQBAL
//  *   created: 01/05/2024 20:45:27
// **/

#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) 
    {
        long long n, m;
        cin >> n >> m;
        vector<long long> v1(n), v2(m);
        
        for (long long i = 0; i < n; i++) 
        {
            cin >> v1[i];
        }
        for (long long i = 0; i < m; i++) 
        {
            cin >> v2[i];
        }
        if (n < 4 || m < 4) {
            cout << -1 << endl;
            continue;
        }
        
        long long total = 0;
        sort(v1.rbegin(), v1.rend());
        sort(v2.rbegin(), v2.rend());
        
        for (long long i = 0; i < 4; i++) 
        {
            total += v1[i];
        }
        for (long long i = 0; i < 4; i++) 
        {
            total += v2[i];
        }
        vector<long long> v;
        for (long long i = 4; i < n; i++) 
        {
            v.push_back(v1[i]);
        }
        for (long long i = 4; i < m; i++) 
        {
            v.push_back(v2[i]);
        }
        
        sort(v.rbegin(), v.rend());
        if (v.size() + 8 < 11) 
        {
            cout << -1 << endl;
            continue;
        }
        
        for (int i = 0; i < 3; i++) 
        {
            total += v[i];
        }
        cout << total << endl;
    }
    return 0;
}