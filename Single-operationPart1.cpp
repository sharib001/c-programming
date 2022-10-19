#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,count=0;
        string s;
        cin>>n>>s;

        for (int i = 0; i < n; i++)
        {
            if(s[i] == '1'){
                count++;
            }
            else{
                break;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}





















// #include <bits/stdc++.h>
// #define ll long long int
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         ll n;
//         string s;
//         cin>>n>>s;

//         ll num = stoi(s);
//         ll r=0,i=0;
//         ll x=0;
//         while (num != 0)
//         {
//             r = num%10;
//             x = x + r*(pow(2,i));
//             i++;
//             num = num/10;
//         }
//         // cout<<"x is "<<x<<endl;

//         ll ans=0, z=0 , y=1;
//         while (ans<x)
//         {
//             z = (x/(pow(2,y)));
//             ans = x ^ z;
//             y++;
//         }
//         cout<<(y-1)<<endl;
//     }
//     return 0;
// }

