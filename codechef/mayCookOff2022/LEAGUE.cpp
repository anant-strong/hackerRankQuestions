#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;

    int x;

    while(i<=n)
    {
        cin >> x;

        if(x%2==0)
        {
            cout << ((x-1) - (x/2-1))*3 << endl;
        }
        else{
            cout << ((x-1)-x/2)*3 << endl;
        }
        i++;
    }
    return 0;
}