#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k,m;

    int a[100];

    for(int i = 1; i <= n;i++){
        cin >> k;
        cin >> m;
        int ans[100];
        int p = 0;
        for(int j = 0; j < k; j++){
           cin >> a[j];
        }
        for(int l=0; l < k; l++){
            for(int o = 0; o < k; o++){
                int r = ((a[l]-a[o])%m);
                if(r<0){
                    r = (a[l]-a[o])+m;
                }
                ans[p] = a[l]+a[o]+ r;
               
                p++;
            }
        }
        
     
    // Initialize maximum element
    int max = ans[0];
 
    // Traverse array elements
    // from second and compare
    // every element with current max
    for (int q = 1; q < p; q++){
    if (ans[q] > max){
        max = ans[q];
    }
            
    }
        
        cout << max << endl;

    }
    return 0;
}