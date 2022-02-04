#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; //for test cases
    int i = 1;
    int c = 0; //this is to count in how many problems two of them are sure
    bool p,v,f; //for friends name
    cin >> t;
    
    while(i<=t){
        cin >> p >> v >> f;
        if(p && v){
            c++;
        }
        else if(v && f){
            c++;
        }
        else if(f && p){
            c++;
        }
        else{
            c = c + 0;
        }
        i++;
    }
    cout << c;

    return 0;
}