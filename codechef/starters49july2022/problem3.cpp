#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;

    cin >> t;

    while(t--){
        int n;
        string s;
        string r;
        
        cin >> n >> s >> r;
        int a[n];
        int b[n];
        int count = 0;
        for(int i = 0; i< n;i++){
            a[i]= s[i] - 48;
            b[i]=r[i]-48;
            if(a[i]^b[i]){
                count++;
            }
        }
        

        if(count%2){
            cout << 0 << endl;
        }else{
            cout << 1 << endl;
        }
        
        

    }
    return 0;
}