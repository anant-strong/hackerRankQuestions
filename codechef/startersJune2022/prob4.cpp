#include <bits/stdc++.h>
using namespace std;

void formA(int a[],int b[],int n){
    
    
    for(int i = 0; i<n-1;i++){
        
        if(b[i]==0){
            a[i+1] = a[i]+2;
        }
        else{
            a[i+1] = a[i]+1;
        }
    }
}

bool check(int a[],int b[],int n){
    for(int i = 0; i < n ; i++){
        if(i == n-1){
            if((a[0]+a[i])%2==b[n-1]){
                return 1;
            }else{
                return 0;
            }
        }
        else{
            if(b[i]==0){
            if((a[i]+a[i+1])%2==0){
                continue;
            }
            else{
                return 0;
            }
        }
        else if(b[i]==1){
            if((a[i]+a[i+1])%2==1){
                continue;
            }
            else{
                return 0;
            }
        }
        }
        
    }
    return 1;
}
void display(int a[],int n){
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    int t;

    cin >> t;
     while(t--){
        int n;
        int a[n];
        cin >> n;
        
        int b[n];
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        if(b[0]==0){
            a[0]=2;
        }
        if(b[0]==1){
            a[0]=1;
        }
        
        formA(a,b,n);
        display(a,n);
        if(check(a,b,n)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }  
        
     }
    return 0;
}