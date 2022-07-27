#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int sum = 0;
        if(a>b){
            sum = a;
        }else{
            sum = b;
        }

        if(c>d){
            sum = sum + c;
        }else{
            sum = sum + d;
        }

        cout << sum << endl;
    }
    return 0;
}