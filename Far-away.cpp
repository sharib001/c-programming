#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void answer()
{
    ll n, m;
    cin >> n >> m;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll out = 0;
    for (int i = 0; i < n; i++)
    {
        out += max(abs(arr[i] - 1), abs(arr[i] - m));
    }
    cout << out <<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        answer();
    }
    return 0;
}












// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--){
//         int n,m,sum=0,count=1,out=0;
//         cin>>n>>m;
//         int arr1[n];
//         vector <int> arr2;
//         for (int i = 0; i < n; i++)
//         {
//             cin>>arr1[i];
//             sum = sum + arr1[i];
//         }

//         cout<<sum<<endl;

//         for (int i = 0; i < n; i++)
//         {
//             if(m*count<sum){
//                 arr2.push_back(m);
//                 count++;
//             }
//             else{
//                 arr2.push_back(1);
//             }
//         }

//         for (int i = 0; i < n; i++)
//         {
//             cout<<arr2[i]<<" ";
//         }

//         for (int i = 0; i < n; i++)
//         {
//             out += abs(arr1[i] - arr2[i]);
//         }
//         cout<<out<<endl;
//     }
//     return 0;
// }
