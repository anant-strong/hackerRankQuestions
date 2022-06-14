#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int a,b,c,d;

    while(t--){
        int count = 0;
        cin >> a >> b >> c >> d;

        if(b>a){
            count++;
        }
        if(c>a){
            count++;
        }
        if(d>a){
            count++;
        }
        cout << count;

    }
    return 0;
}