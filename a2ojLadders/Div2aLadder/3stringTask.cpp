#include <bits/stdc++.h>

using namespace std;

char toLowercase(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
    
        return ch;
    
}

int main()
{
    string sl;
    cin >> sl;
    string temp;
    
    //removing vowels
    for(int i=0; i < sl.length();i++){
        
        if(toLowercase(sl[i])=='a' || toLowercase(sl[i])=='e' || toLowercase(sl[i])=='i' || toLowercase(sl[i])=='o' || toLowercase(sl[i])=='u' || toLowercase(sl[i])=='y'){
            continue;
        }
        
        else{
           temp.push_back('.');
           temp.push_back(toLowercase(sl[i])); 
        }
        
    }
    
    cout << temp;
    return 0;
}