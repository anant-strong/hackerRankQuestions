#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--){
        int a , b;
        cin >> a >> b;
        
        int ans = (a+b);

        if(ans%2!=0){
            if(((ans+1)/2)%2==0){
                cout << "Bob" << endl;
            }
            else{
                cout << "Alice" << endl;
            }
        }
        else{
            if((ans/2)%2==0){
                cout << "Alice" << endl;
            }
            else{
                cout << "Bob" << endl;
            }
        }
    }
    return 0;
}