#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    float b,c;
    cin >> a;
    cin >> b;
    cin >> c;
    cout << "TOTAL = R$ " <<fixed<<setprecision(2)<< b + 0.15 * c << endl;
    return 0;
}