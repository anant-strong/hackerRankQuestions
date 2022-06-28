#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;

    while(t--){
        int a,b;
        cin >> a >> b;
        int ans = 1;
        int i = 1;
        for(int i = 1; i <= a-2 ; i++ ){
            ans = (ans * 2)%1000000007;
        }

        cout << 2*(ans-1) + 2 << endl;
      
    }  
    return 0;
}