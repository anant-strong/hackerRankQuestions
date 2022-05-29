#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y;

    cin >> n >> x >> y;

    if(n-(x+y)>=0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}