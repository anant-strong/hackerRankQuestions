#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int arrA[n],arrB[n];
    int x,y;
    int i = 0;
    int t;
    cin >> t;
    while(i<t){
        cin >> n >> x >> y;
        
        int j = 0;
        while(j<t){
            cin >> arrA[j];
            j++;
        }

        int k = 0;
        while(k<t){
            cin >> arrB[k];
            k++;
        }
        
        if((arrA[0]+x == arrB[0] && arrA[1] + x == arrB[0]) || (arrA[0]+x == arrB[0] && arrA[1] + x == arrB[0]) || (arrA[0]+x == arrB[0] && arrA[1] + x == arrB[0])){
            cout << "Yes" << endl;
        }
        else if ((arrA[1]+x == arrB[0] && arrA[2]+x == arrB[0])  || (arrA[1]+x == arrB[0] && arrA[2]+x == arrB[0] ) || (arrA[1]+x == arrB[0] && arrA[2]+x == arrB[0]) )
        {
            cout << "Yes" << endl;
        }else if ((arrA[0]+x == arrB[0] && arrA[2]+x == arrB[0]) || (arrA[0]+x == arrB[0] && arrA[2]+x == arrB[0] ) || (arrA[0]+x == arrB[0] && arrA[2]+x == arrB[0] ))
        {
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
        
        

        i++;
    }
    return 0;
}