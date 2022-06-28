#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--){
        int a, b;
        cin >> a >> b;

        if(a==b){
            exit(0);
        }

        int ans1a = a/10;
        int ans1b = b/10;
        int ans2a = a%10;
        int ans2b = b%10;
        int ansa;
        int ansb;
        if(ans2a){
            ansa = ans1a + 1;
        }
        else{
            ansa = ans1a;
        }

        if(ans2b){
            ansb = ans1b + 1;
        }
        else{
            ansb = ans1b;
        }

        cout << abs(ansb - ansa) << endl;
    }
    return 0;
}