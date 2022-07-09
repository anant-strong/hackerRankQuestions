#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int a[n];
        int b[n];

        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
                ans = ans + b[i];
        }
        int k = ans/(n+1);

        for(int i = 0; i < n; i++){
            cout << b[i]-k << " ";
        }cout << endl;
    }
    return 0;
}