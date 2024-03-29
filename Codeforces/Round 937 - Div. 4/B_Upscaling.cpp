// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         int k=0;
//         for(int i=0; i<n; i++)
//         {
//             for(int j=0; j<n; j++)
//             {   
//                 if(i%2==0)
//                 {
//                     if(j%2==0)
//                     {
//                         for(int z=0; z<1; z++)
//                         {
//                             cout<<"##";
//                         }
//                     }
//                     else
//                     {
//                         for(int z=0; z<1; z++)
//                         {
//                             cout<<"..";
//                         }
//                     }
//                 }
//                 else
//                 {
//                     if(j%2==0)
//                     {
//                         for(int z=0; z<1; z++)
//                         {
//                             cout<<"..";
//                         }
//                     }
//                     else
//                     {
//                         for(int z=0; z<1; z++)
//                         {
//                             cout<<"##";
//                         }
//                     }
//                 }  
//             }
//             cout<<endl;
//             for(int j=0; j<n; j++)
//             {   
//                 if(i%2==0)
//                 {
//                     if(j%2==0)
//                     {
//                         for(int z=0; z<1; z++)
//                         {
//                             cout<<"##";
//                         }
//                     }
//                     else
//                     {
//                         for(int z=0; z<1; z++)
//                         {
//                             cout<<"..";
//                         }
//                     }
//                 }
//                 else
//                 {
//                     if(j%2==0)
//                     {
//                         for(int z=0; z<1; z++)
//                         {
//                             cout<<"..";
//                         }
//                     }
//                     else
//                     {
//                         for(int z=0; z<1; z++)
//                         {
//                             cout<<"##";
//                         }
//                     }
//                 }  
//             }
//             cout<<endl;
//         }
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        for(int x=0; x<m; x++)
        {
            for(int y=0; y<m; y++)
            {   
                if(x%2==0)
                {
                    if(y%2==0)
                    {
                        cout<<"##";
                    }
                    else
                    {
                        cout<<"..";
                    }
                }
                else
                {
                    if(y%2==0)
                    {
                        cout<<"..";
                    }
                    else
                    {

                        cout<<"##";

                    }
                }  
            }
            cout<<endl; 
            for(int y=0; y<m; y++)
            {   
                if(x%2==0)
                {
                    if(y%2==0)
                    {
                        cout<<"##";
                    }
                    else
                    {

                        cout<<"..";
                    }
                }
                else
                {
                    if(y%2==0)
                    {
                        cout<<"..";
                    }
                    else
                    {
                        cout<<"##";

                    }
                }  
            }
            cout<<endl;
        }
    }
    return 0;
}