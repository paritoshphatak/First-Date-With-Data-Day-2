#include <iostream>
using namespace std;

int main()
{
    int x = 1080;
    int *p;                // defining a variable

    p = &x;
    cout << x << endl; // value of a variable
    cout << p << endl; // value of a variable x
    cout << *p;        // value at pointer 
    
}