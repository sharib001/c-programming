#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int a,b,x;
        cin>>a>>b>>x;

        if(a==b){
            cout<<"yes"<<endl;
        }
        else if(abs(a-b)%(2*x)==0){
            cout<<"yes"<<endl;
        }
        else {
            cout<<"no"<<endl;
        }
    }
    return 0;
}