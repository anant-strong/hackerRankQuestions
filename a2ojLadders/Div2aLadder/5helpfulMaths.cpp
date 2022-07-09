#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string final;
    vector<int> v;
    for(int i = 0; i < s.length();i+=2){
        v.push_back((s[i]));
    }
    sort(v.begin(),v.end());
    for(int i = 0; i <v.size();i++){
        if(v[i]==49 && i != v.size()-1){
            final.push_back('1');
            final.push_back('+');
        }
        else if(i==(v.size()-1) && v[i]==49){
            final.push_back('1');
        }
        else if(i==(v.size()-1) && v[i]==50){
            final.push_back('2');
        }
        else if(v[i]==50){
            final.push_back('2');
            final.push_back('+');
        }
        else if(i==(v.size()-1) && v[i]==51){
            final.push_back('3');
        }
        else{
            final.push_back('3');
            final.push_back('+');
        }
    }
    cout << final;
    return 0;
}