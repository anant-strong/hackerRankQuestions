#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--){
        int a,b;
        cin >> a >> b;

        int k;
        for(int i = 0; i < a; i++){
            cin >> k;
            int rem = b - k;
            if(rem<0){
                cout << 0;
            }
            else{
                b = rem;
                cout << 1;
            }
        }
        cout << endl;

    }
    return 0;
}