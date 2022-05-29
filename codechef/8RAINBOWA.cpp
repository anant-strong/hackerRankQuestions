#include <bits/stdc++.h>

using namespace std;

int n;

void read(int a[])
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
int check(int b[], int c[])
{
    int y;
    for (int i = 0; i < n / 2; i++)
    {
        if (b[i] == c[n / 2 - 1 - i])
        {
            y = 1;
        }
        else
        {
            y = 0;
            return y;
        }
    }
    return y;
}
void isRainbowArray(int a[], int b[], int c[])
{
    if (n)
        if (n % 2 == 0 && a[n / 2 - 1] == 7)
        {
            for (int i = 0; i < n / 2; i++)
            {
                b[i] = a[i];
            }
            for (int i = 0; i < n / 2; i++)
            {
                c[i] = a[n / 2 + i];
            }
            int k = check(b, c);
            if (k)
            {
                cout << "yes" << endl;
            }
            else
            {
                cout << "no" << endl;
            }
        }
        else if (n % 2 != 0 && a[n / 2] == 7)
        {
            for (int i = 0; i < n / 2; i++)
            {
                b[i] = a[i];
            }
            for (int i = 0; i < n / 2; i++)
            {
                c[i] = a[n / 2 + 1 + i];
            }
            int k = check(b, c);
            if (k)
            {
                cout << "yes" << endl;
            }
            else
            {
                cout << "no" << endl;
            }
        }
        else
        {
            cout << "no" << endl;
        }
}
int main()
{
    int t;
    int a[100], b[100], c[100];
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        read(a);
        isRainbowArray(a, b, c);
    }
    return 0;
}