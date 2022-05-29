#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n;
    char s[n];
    
    while(t--){
        int count = 0;
        cin >> n;
        cin >> s;
        
        for(int i = 0; i < n; i++){
            int t = abs(int(s[i]-'a'));
            int u = abs(int(s[i]-'e'));
            int v = abs(int(s[i]-'i'));
            int w = abs(int(s[i]-'o'));
            int x = abs(int(s[i]-'u'));
            
            if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!= 'u'){
                if(t==u || t==v || t==w || t==x){
                count++;
                }
                if(u==v || u==w || u==x){
                count++;
                }
                if(v==w || v==x){
                count++;
                }
                if(w==x){
                count++;
                }
            }
           
            
            
            

        }
        count++;
        cout << count << endl;
    }
    return 0;
}