#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
       int n,m,x,cost;
       cin>>n>>m>>x;
       cost = (2*n + 2*m)*x;
       cout<<cost<<endl;
    }
    return 0;
}