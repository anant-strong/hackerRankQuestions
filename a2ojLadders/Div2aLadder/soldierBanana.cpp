#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k,n,w;
    int r=0;
    
    cin >> k >> n >> w;

    int i = 1;
    while(i <= w){
        r = r + i*k;
        i++;
    }
    if(r>n){
        cout << r - n;
    }
    else{
        cout << 0;
    }

    return 0;
}