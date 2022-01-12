#include <iostream>

using namespace std;

int main()
{
    int a,b,T,i;
    cin >>T;
    int x[T];
    for (i = 0; i<T ; i++){
        cin >> a >>b;
        x[i] = a + b;
        
    }
    for (i = 0; i<T ; i++){
        cout << x[i]<<endl;
    }



    return 0;
}