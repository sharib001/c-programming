#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        if (n == x)
        {
            cout << 0 << endl;
        }
        else if ((n - x) < x)
        {
            cout << (n - x) << endl;
        }
        else
        {
            cout << x << endl;
        }
    }

    return 0;
}