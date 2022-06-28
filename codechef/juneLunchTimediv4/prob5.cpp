
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    if (t > 0 && t < 1001)
    {
        while (t--)
        {
            int count = 0;
            
            int a, b, n;
            cin >> a >> b >> n;
            int ans = a;

            if((b-a)>n){
                cout << -1 << endl;
                continue;
            }

            if ((n != 1) && (n & (n - 1)))
            {
                
                while(ans!=b){
                    
                    if(pow(2,log2(b-a))<n){
                        int k = pow(2,log2(b-a));
                        ans = ans ^ k;
                        count++;
                    }
                    else{
                        int k = pow(2,log2(b-a)-1) ;
                        ans = ans ^ k;
                        count++;
                    }
                }
                cout << ans << endl;

            }
        }
    }

    return 0;
}