#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        float a,x,b,y,s1,s2;
        cin>>a>>x>>b>>y;
        s1 = a/x;
        s2 = b/y;
        if (s1>s2)
        {
            cout<<"Alice"<<endl;
        }
        else if (s1 == s2)
        {
            cout<<"Equal"<<endl;
        }
        else {
            cout<<"Bob"<<endl;
        } 
    }
    return 0;
}