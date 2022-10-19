#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        float a,b,x,y;
        cin>>a>>b>>x>>y;

        float chef_speed = a/x;
        float chefina_speed = b/y;

        if (chef_speed == chefina_speed)
        {
            cout<<"Both"<<endl;
        }
        else if(chef_speed<chefina_speed){
            cout<<"Chef"<<endl;
        }
        else {
            cout<<"Chefina"<<endl;
        }
    }
    return 0;
}