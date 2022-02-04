#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,t;
    float f;
    int i = 1;
    cin >> t;

    while(i<=t){
        cin >> n;
        f = pow((0.143*n),n);
        cout << (int)round(f) << endl;
        i++;
    }

    return 0;
}