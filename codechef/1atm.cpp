#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    float b;
    cin >> a;
    cin >> b;
    if(a%5 == 0 && b>=(a + 0.5)){
        cout <<fixed<<setprecision(2)<<b - (a + 0.5);

    }else{
        cout <<fixed<<setprecision(2)<<b;
    }
    return 0;
}