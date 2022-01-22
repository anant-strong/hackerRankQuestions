#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,d,e,f;
    int t;
    cin >> t;
    while(t-->0){
     cin >> a >> b >> c >> d >> e >> f;
     if(a + b + c > d + e + f){
         cout << "DRAGON" << endl;
     }
     else if(d + e + f > a + b + c){
         cout << "SLOTH" << endl;
     }else if(a>d){
         cout << "DRAGON" << endl;
     }else if (d>a){
         cout << "SLOTH" << endl;
     }else if (b>e){
         cout << "DRAGON" << endl;
     }else if (e>b){
         cout << "SLOTH" << endl;
     }else {
         cout << "TIE";
     }

    }
    return 0;
}