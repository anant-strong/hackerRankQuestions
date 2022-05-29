#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i = 1; i <= n; i++){
        int a, b;
        int j;//for a
        int k;//for b
        cin >> a >>b;
        if(a%2==0){
            j = (a-2)/2;
            k = (b-1)/2;
        }else if(b%2==0){
            k = (b-2)/2;
            j = (a-1)/2; 
        }
        if((a+2)==b || abs(a - 2)==b){
            cout << "YES" << endl;
        }
        else if(j==k){
            cout << "YES" << endl;
            j = 1;
            k= 2;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
//another method

// main(){
//     int n;
//     cin >>n;
//     for(int i = 1; i<=n;i++){
//         int a,b;
//         cin >> a >> b;
//         if(a<b){
//             int temp = a;
//             a = b;
//             b = temp;
//         }//we exchanged value of a in order to make a everytime the bigger number
//         if(a-b==2){ //this happens for consecutive odd/even numbers
//             cout << "YEs";
//         }
//         else if(a-b==1 && b%2==1){//for smaller number is odd and diff is one
//             cout << "YEs";
//         }
//         else{
//             cout << "No";
//         }
//     }
// }