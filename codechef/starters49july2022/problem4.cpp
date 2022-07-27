#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;

        cin >> a >> b >> c;
        if (a > 10 || b > 10 || c > 10)
        {
            exit(0);
        }
        int p, q, r;

        if (a == b && a == c)
        {
            cout << "YES" << endl;
        }
        else if (a == b)
        {
            if (b < c)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else if (b == c)
        {
            if (b < a)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}