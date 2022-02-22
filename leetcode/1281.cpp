#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,sum = 0,prod = 1;
    cin >> n;
    while(n){
       int a = n%10;
       n = n/10;
       sum = sum + a;
       prod = prod*a;
    }
    cout << prod - sum;
    return 0;
}