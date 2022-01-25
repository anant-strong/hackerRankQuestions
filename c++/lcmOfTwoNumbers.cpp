#include <bits/stdc++.h>

using namespace std;

int lcm(int a,int b){
    //program for lcm of two numbers
    int max_num;
    int flag =1;
    int ans;

    // using ternary operator to get the large number  
    max_num = (a > b) ? a : b;  
      
    while (flag)    
    {  
        // if statement checks max_num is completely divisible by a and b.  
        if(max_num % a == 0 && max_num % b == 0)  
        {  
            ans = max_num;  
            break;  
        }  
        max_num++; // update by 1 on each iteration  
    }
    return ans;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << lcm(a,b);
    
    return 0;
}