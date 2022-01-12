#include <bits/stdc++.h>

using namespace std;


int a;

int main()
{
    
    int i = 0;
    int sum = 0;
    cin >> a;
    int c = a;
    while(i<c){
       if(a%3==0 || a%5==0){
           sum = sum + a;
       }
        i++;
        a--;       
}
sum = sum - c;
cout << sum;



    return 0;
}
