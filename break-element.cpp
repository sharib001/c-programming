#include<iostream>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--){
        long long int n,count=0,count1=0;
        cin>>n;
        long long int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        
        for (int i = 0; i < n; i++)
        {
            if (arr[i]%2 == 0 && arr[i]>=0)
            {
                count++;
            }
            else {
                count1++;
            }
        }
        if (count == n || count1 == n)
        {
            cout<<0<<endl;
        }
        else {
            cout<<count<<endl;
        }
    }

    
    return 0;
}