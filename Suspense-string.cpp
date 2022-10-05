#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s, ans = "";
        cin >> s;

        int i = 0;
        int j = n - 1;

        while (i <= j)
        {
            if (s[i] == '0')
            {
                ans = s[i] + ans;
            }
            else
            {
                ans = ans + s[i];
            }

            if (i < j)
            {
                if (s[j] == '0')
                {
                    ans = ans + s[j];
                }
                else
                {
                    ans = s[j] + ans;
                }
                j--;
            }
            i++;
        }

        cout << ans << endl;
    }
    return 0;
}
