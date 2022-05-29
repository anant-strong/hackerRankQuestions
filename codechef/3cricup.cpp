#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    
    cin >> n;

    int i = 1;

    while(i<=n){
            int a,b,c;
            cin >> a >> b >> c;
            if(c>=abs(a-b)){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
            i++;
    }

    return 0;
}