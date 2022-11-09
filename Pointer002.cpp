#include <iostream>
using namespace std;

int call_by_value(int n)
{
    cout << "address of n in call_by_value function : " << &n << endl;
    n *= n;
    return n;
}

void call_by_reference_pointer(int *n)
{
    cout << "address of n in call_by_reference_pointer function : " << n << endl;
    *n *= *n;
}

void call_by_reference_address(int &n)
{
    cout << "address of n in call_by_reference_address : " << &n << endl;
    n *= n;
}

int main()
{
    int n = 8;
    cout << "address of n in main() : " << &n << endl;
    // cout << "ans : " << call_by_value(n) << endl;
    // cout << "value of n : " << n << endl;


    // call_by_reference_pointer(&n);
    // cout << "ans : " << n << endl;
    // cout << "value of n : " << n << endl;

    call_by_reference_address(n);
    cout << "ans : " << n << endl;
    cout << "value of n : " << n << endl;
    return 0;
}