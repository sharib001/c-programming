#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int length;
        cin>>length;
        string str;
        cin >> str;
        long long int count = 0;

        for (long long int i = 0; i < length-1; i++)
        {
            if (str[i] == '1' && str[i + 1] == '0')
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}