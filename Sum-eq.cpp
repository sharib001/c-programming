#include<iostream>
using namespace std;

int main()
{
    int n,count=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i+j == n)
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}