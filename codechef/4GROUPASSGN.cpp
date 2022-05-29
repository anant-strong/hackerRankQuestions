#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;

    while(i<=n){
        int a,b,c;
        cin >> a >> b;
        c = 2*a -(b-1);
        cout << c << endl;
        i++;
    }
    return 0;
}