#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a,b,c,d;

    for(int i = 1; i <= n;i++){
        cin >> a >> b >> c >> d;
        if((a+c*d)>b){
            cout << "overflow" <<endl;
        }
        else if((a+c*d)==b){
            cout << "filled" << endl;
        }
        else{
            cout << "unfilled"<< endl;
        }
    }
    return 0;
}