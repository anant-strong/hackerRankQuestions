#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    double A, B, C, MEDIA;
    cin >> A;
    cin >> B;
    cin >> C;
    MEDIA = (A*2 + B*3 + C*5)/10;
    cout << "MEDIA = "<<fixed<<setprecision(1)<< MEDIA << endl;
    return 0;
}