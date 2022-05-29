#include <bits/stdc++.h>

using namespace std;

void read(int a[]){
    for(int i =0; i < 4;i++){
        cin >> a[i];
    }
}
int counting(int a[]){
    if(a[0]==a[2] && a[1]==a[3])
    {
        return 0;
    }
    else if(a[0]==a[3] && a[1]==a[2])
    {
        return 0;
    }
    else if(a[0]==a[2] || a[0]==a[3])
    {
        return 1;
    }
    else if(a[1]==a[2] || a[1]==a[3])
    {
        return 1;
    }
    else{
        return 2;
    }
}
int main()
{
    int t;
    cin >> t;
    int a[4];

    for(int i = 0;i<t;i++){
        read(a);
        //for gold medal counting
        int y = counting(a);
        cout << y << endl;
    }
    return 0;
}