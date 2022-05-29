#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int a,b,c,x;


    while(t--)
    {
        cin >> a >> b >> c;

        x = (c - b)/a;

        cout << x << endl;
    }
    return 0;
}