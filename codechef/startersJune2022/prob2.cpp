#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
     cin >> t;

     while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;

        int k = a - (b+c);
        int l = a - b;

        if(k>=d){
            cout << 0 << endl;
        }
        else if(l>=d){
            cout << 1 << endl;
        }
        else {
            cout << 2 << endl;
        }
     }
    return 0;
}