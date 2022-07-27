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

        int a[n];
        int f[n] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            f[a[i]]++;
        }
        int k = -1;
        for (int i = 0; i < n; i++)
        {
            if (k > f[i])
            {
                k = f[i];
            }
        }
        if (k == 2)
        {
            cout << 2 << endl;
        }
        else
        {
            if (k % 2)
            {
                cout << k / 2 + 1 << endl;
            }
            else
            {
                cout << k / 2 << endl;
            }
        }
    }

    return 0;
}