#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;    //code is right only variable we want to store is of 32 digits so variable declaration problem
    cin >> n;
    int count = 0;

    while(n){
        
        //checking last bit
        if(n&1){
            count++;
        }
        n = n>>1;
    }
    cout << count;
    return 0;
}