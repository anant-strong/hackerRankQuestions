#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[5][5] = {"abcd", "ab", "eff", "ddc", "tba"};

    int up = 0;

    while (up < 4)
    {
        int in = 0;

        while (in < 5)
        {
            if (s[up][in] == '\0' || s[up + 1][in] == '\0')
            {
                break;
            }
            else
            {
                if ((s[up][in] - s[up + 1][in]) == 0)
                {
                    in++;
                    continue;
                }
                else if ((s[up][in] - s[up + 1][in]) > 0)
                {
                    swap(s[up], s[up + 1]);
                }
                else{
                    break;
                }
            }
        }
        up++;
    }
    for(int i = 0; i< 5;i++){
        for(int j = 0; j< 5; j++){
            cout << s[i][j] ;
        }
        cout << " ";
    }

    return 0;
}