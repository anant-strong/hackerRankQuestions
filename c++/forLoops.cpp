#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    
    while (a<=b) {
        if (1<=a && a<=9) {
        if(a==1){
            cout << "one" << endl;
        }
        else if (a==2) {
             cout << "two" << endl;
        }
        else if (a==3) {
            cout << "three" << endl;
        }
        else if (a==4) {
        cout << "four" << endl;
        }
        else if (a==5) {
             cout << "five" << endl;
        }
        else if (a==6) {
             cout << "six" << endl;
        }
        else if (a==7) {
             cout << "seven" << endl;
        }
        else if (a==8) {
             cout << "eight" << endl;
        }
        else {
        cout << "nine" << endl;
        }
    
    }
    else {
        if(a%2==0){
            cout << "even" <<endl;
        }
        else {
        cout << "odd" << endl;
        }
        
    }
  a++;
    }
    return 0;
}