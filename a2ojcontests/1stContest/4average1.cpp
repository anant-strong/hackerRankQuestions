#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    double A, B, MEDIA;
    cin >> A;
    cin >> B;
    MEDIA = (A*3.5 + B*7.5)/11;
    cout << "MEDIA = "<<fixed<<setprecision(5)<< MEDIA << endl;
    return 0;
}