#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while (t--)
    {
        long long int a,b;
        cin>>a>>b;
        if(b%a != 0){
            if(b>2*a){
                cout<<"Yes"<<endl;
            }
            else {
                cout<<"No"<<endl;
            }
        }
        else {
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}