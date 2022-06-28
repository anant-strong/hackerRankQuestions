#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        
        if(abs(c-a)==0 && (abs(d-b)==2 || abs(d-b)==4)){
            cout << "YES" << endl;
        }
        else if((abs(c-a)==4 || abs(c-a)==2)&& abs(d-b)==0){
            cout << "YES" << endl;
        }else if(abs(c-a)==4 && abs(d-b)==2){
            cout << "YES" << endl;
        }
        else if(abs(c-a)==2 && abs(d-b)==4){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }


    }
    return 0;
}