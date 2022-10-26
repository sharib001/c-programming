#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q, sum = 0;
        cin >> n >> q;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }

        int query[q][2];
        for (int i = 0; i < q; i++)
        {
            cin >> query[i][0];
            cin >> query[i][1];
        }

        for (int i = 0; i < q; i++)
        {
            int temp = abs(query[i][0] - query[i][1]);
            temp++;
            if (temp % 2 == 0)
            {
                continue;
            }
            else
            {
                sum++;
            }
        }
        cout << "ans is " << sum << endl;
    }
    return 0;
}