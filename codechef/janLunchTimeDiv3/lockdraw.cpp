#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,a,b,c;
    cin >> t;
    int i = 1;
    while(i <= t){
        cin >> a >>b>>c;
        if(a+b==c){
            cout << "YES" << endl;
        }
        else if(b+c==a){
            cout << "YES" << endl;
        }else if(c+a==b){
            cout << "YES" << endl;
        }else{
            cout << "No" << endl;
        }
        i++;
    }
    return 0;
}   