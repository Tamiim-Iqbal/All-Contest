// #include <bits/stdc++.h>
// using namespace std;
// int main() 
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     int t;
//     cin>>t;
//     while(t--) 
//     {
//         string s;
//         cin>>s;
        
//         int hour = stoi(s.substr(0,2)); 
//         int minute = stoi(s.substr(3,2));
        
//         string period;
//         if (hour==0) 
//         {
//             hour=12;
//             period="AM";
//         } 
//         else if (hour<12) 
//         {
//             period="AM";
//         } 
//         else if (hour==12) 
//         {
//             period="PM";
//         } 
//         else 
//         {
//             hour -= 12;
//             period = "PM";
//         }
//         //cout<<setfill('0')<<hour<<":"<<setfill('0')<<minute<<" "<<period<<endl;
//         cout<<setw(2)<<setfill('0')<<hour<<":"<<setw(2) <<setfill('0')<<minute<<" "<<period<<endl;
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--) 
    {
        string s;
        cin>>s;
        int h=stoi(s.substr(0,2)); 
        int m=stoi(s.substr(3,2));
        
        string p;
        if (h==0) 
        {
            h=12;
            p="AM";
        } 
        else if (h<12) 
        {
            p="AM";
        } 
        else if (h==12) 
        {
            p="PM";
        } 
        else 
        {
            h -= 12;
            p = "PM";
        }
        cout<<setw(2)<<setfill('0')<<h<<":"<<setw(2) <<setfill('0')<<m<<" "<<p<<endl;
    }
    return 0;
}
