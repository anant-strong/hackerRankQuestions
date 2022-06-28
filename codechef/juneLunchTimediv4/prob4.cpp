#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        if(n<3){
            exit(0);
        }
        if(n%2==0){
            cout<< "10";
            int k = n-4;
            while(k--){
                cout<< "0";
            }
            cout << "01" << endl;
        }
        else{
            cout << "0";
            int l = n -2;
            while(l--){
                cout << "1";
            }
            cout << "0" << endl;
        }
    }
    return 0;
}