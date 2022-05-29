#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    int k;
    int a[k];
    int counter =0;
    while(i <= n){
        cin >> k;
        for(int j = 0; j<k; j++){
            cin >> a[i];
            if(a[i]>=1000){
                counter++;
            }
        }
        cout << counter << endl;
        i++;
    }
    return 0;
}