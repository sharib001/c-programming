#include<iostream>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n, count=1;
        string s;
        cin>>n>>s;

        for (int i = 1; i < n; i++)
        {
            if(s[i] == '0'){
                count++;
            }
            else {
                break;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}