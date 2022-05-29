#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    
    

    int k[1000];
    int x;
    int maximum = 0;

    while(t--)
    {
        int count[10] = {0};
        cin >> x;
        int i = 0;
        while(i < x)
        {
            cin >> k[i];
            switch(k[i])
            {
                
                case 1:
                    count[0]++;
                    break;
                case 2:
                    count[1]++;
                    break;
                case 3:
                    count[2]++;
                    break;
                case 4:
                    count[3]++;
                    break;
                case 5:
                    count[4]++;
                    break;
                case 6:
                    count[5]++;
                    break;
                case 7:
                    count[6]++;
                    break;
                case 8:
                    count[7]++;
                    break;
                case 9:
                    count[8]++;
                    break;
                case 10:
                    count[9]++;
                    break;
            }
            i++;
        }
        cout << "printing the count array" << endl;
        int z = 0;
        while(z < 10)
        {
            cout << count[z] << " ";
            z++;
        }
        cout << endl;
        maximum = -1;
        int l =0;
        while(l<10)
        {
            if(maximum < count[l])
            {
                maximum = count[l];
            }
            l++;
        }
        int j = 0;
        int q=0;
        while(j < 10)
        {
            
            if(maximum == count[j]){
                q++;
            }
            
            j++;

        }
        if(q>=2)
        {
            cout << "confused" << endl;
        }
        else
        {
            int r =0;
            while(r < 10)
            {
                if(maximum == count[r])
                {
                    cout << r +1 << endl;
                    break;
                }
                r++;
            }
        }
    while(i < 10)
    {
        count[i] = 0;
        i++;
    }
    maximum = 0;
        
    }

    return 0;
}