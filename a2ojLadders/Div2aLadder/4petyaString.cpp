#include <bits/stdc++.h>
using namespace std;

char toLowerCase(char ch){
    if(ch>='A' && ch<='Z'){
        char temp = ch-'A' + 'a';
        return temp;
    }
    return ch;
}
int main()
{
    string a,b;
    cin >> a >> b;
    int flag=0;
    for(int i = 0; i < a.length();i++){
        if(toLowerCase(a[i])==toLowerCase(b[i])){
            continue;
        }
        else if(toLowerCase(a[i])>toLowerCase(b[i])){
            flag = 1;
            break;
        }
        else{
            flag = -1;
            break;
        }
    }
    cout << flag;
    
    return 0;
}