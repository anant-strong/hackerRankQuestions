#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
	string m;
    cout << "Enter a number to check it is prime or not: ";
	cin >> n;
	int t = 2;
	while(t<n){
	    if(n%t==0){
	    m = "number is not prime";
        break;   //used break becoz if last no which cannot divide n, it will assign it as prime if don't stop it when it divides
	    }
	    else {
	        m = "number is prime";
	    }
	    t++;
	}
	cout << m;
    return 0;
}