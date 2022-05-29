#include <bits/stdc++.h>
using namespace std;
 
void findAB(int x,int y){
    int b = 1;
    int a = 1;
    int prod = x*b;
    
    
    while(prod <= y){
        if(prod == y){
            cout << a <<" " << b << endl;
            break;
        }
        while(prod <= y){
            prod = prod*b;
            a++;
        }
        b++;
        if(prod>y){
           prod = x*b;
           a = 1;
        }
    }
}
 
int main()
{
    int t;
    cin >> t;
    int x,y;
 
    while(t--){
        cin >> x >> y;
 
        if(x > y){
            cout << 0 ;
            cout << " ";
            cout << 0;
            cout << endl;
        }
        
        findAB(x,y);
    } 
    // int t;

    // cin >> t;
    // cout << t +4;
    return 0;
}
