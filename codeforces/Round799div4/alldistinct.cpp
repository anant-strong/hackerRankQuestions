#include <bits/stdc++.h>
using namespace std;

    void sort(int a[],int n) {
    for (int i=0;i<n-1;i++) {
        for (int j=0;j<n-i-1; j++) {
            if (a[j] > a[j+1]) {
                int temp =  a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main() {
int t;
cin >> t;
while(t--) {
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    sort(a,n);
    int ans=n;
    for(int i=0;i<n-1;i++) {
        if(a[i]==a[i+1]) {
            ans=ans-1;
        }
    }
    if((n-ans)%2==1) ans=ans-1;
    cout << ans;
    }
return 0;
}
