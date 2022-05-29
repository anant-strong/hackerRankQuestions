#include <bits/stdc++.h>

using namespace std;

void read(int x, int a[], int b[]){
    
    int i = 0;

    while(i < x){
        cin >> a[i];
        i++;
    }
    i =0;
    while(i < x){
        cin >> b[i];
        i++;
    }
}
int compare(int a[], int b[], int x){
    int value = 0;
    int i = 0;

    while(i<x){
        if(a[i]==b[i]){
            value++;
        }
        i++;
    }
    return value;
}
// void display(int x, int a[], int b[]){
//     int i = 0;
//     while(i<x){
//         cout << a[i] <<  " " << b[i] << endl;
//         i++;
//     }
// }
int main()
{
    int n,x;

    cin >> n;

    int a[x],b[x];
    int i = 1;
    // display(x,a,b);
    while(i<=n){
        cin >> x;
        read(x,a,b);
        int z = compare(a,b,x);
        cout << z << endl;
        
        i++;
    }
    
    return 0;
}