#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    
    
    cin >> n >> k;
    int arr[n];
    
    int i = 0;
    int count = 0;

    while(i<n){
        cin >> arr[i];
        
        if(arr[i]%k==0){
            count++;
        }
        i++;
    }
    cout << count;
    return 0;
}