#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    int age = 19;
    int *pAge = &age;      //this is a pointer variable
    double gpa = 2.7;  
    double *pgpa = &gpa;        
    string name = "anant";
    string *pname = &name;

    cout << &age << endl;       //this will print out the memory address of 19 i.e.
    cout << pAge << endl;     // this will print out the pointer(memory address) stored in the variable pAge
    cout << pgpa << endl;        //             ""
    cout << *pname << endl; // this will print out the value of variable whose pointer(memory address) 
                              //is stored in this pointer variable(or dereferrencing a pointer)
    cout << *&name << endl;
    return 0;
}