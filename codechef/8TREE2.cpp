#include <bits/stdc++.h>
using namespace std;

int operations(int arr[],int n){
    
    int count = 0;
    sort(arr);
    int temp;
    for(int i = 0; i < n; i++){
        if(arr[i]!=0 && arr[i]!=temp){
            count++;
            temp= arr[i];
        }
    }
    return count;

}
int main()
{
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i  = 0; i < n; i++){
            cin >> arr[i];
        }
        cout << operations(arr,n) << endl;
    }
    return 0;
}