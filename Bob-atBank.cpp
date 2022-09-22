#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int w,x,y,z,amt;
        cin>>w>>x>>y>>z;

        amt = w+((x-y)*z);
        cout<<amt<<endl;
    }
    return 0;
}