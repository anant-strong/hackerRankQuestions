#include <bits/stdc++.h>

using namespace std;


int main()
{
    string a;
    
    int t;
    int i = 0;
    cin >> t;   //no of test cases

    while(i<t)
    {
        
    cin >> a;

    int b = a.length();  //for measuring length of the string

    char *first;        //pointer variable to store the memory address 
    first = &(a[0]);     //memory address of char of index 0 in a is being stored

    char *last;
    last = &(a[b-1]);   //memory address of char of index b-1 in a is being stored

    if(b>10)
    {
        cout << *first << b - 2 << *last << endl;
    }
    else
    {
        cout << a << endl;
    }
    i++;
    }
    return 0;
}