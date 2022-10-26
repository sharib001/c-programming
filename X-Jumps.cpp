#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,y,div=0, rem=0;
        cin>>x>>y;

        if(x<y){
            cout<<x<<endl;
        }
        else {
            div = x/y;
            rem = x%y;
            cout<<(div+rem)<<endl;
        }
    }
    return 0;
}