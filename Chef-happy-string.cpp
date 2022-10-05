#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        int count = 0;
        bool ans = false;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                count++;
                if (count >= 3)
                {
                    cout << "HAPPY" << endl;
                    ans = true;
                    break;
                }
            }
            else
            {
                count = 0;
            }
        }
        if (ans == false)
        {
            cout << "SAD" << endl;
        }
    }
    return 0;
}