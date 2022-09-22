#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int arr[4],count=0;
        for (int  i = 0; i < 4; i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i < 4; i++)
        {
            if (arr[i] == 0)        
            {
                count++;
            }
        }
        if(count == 4){
            cout<<"IN"<<endl;
        }
        else {
            cout<<"OUT"<<endl;
        }
    }
    return 0;
}