#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        string s1;
        cin >> s1;

        if (n <= 2)
        {
            cout << s1 << endl;
        }
        else
        {
            sort(s1.begin(), s1.end());
            cout << s1 << endl;
        }
    }
    return 0;
}