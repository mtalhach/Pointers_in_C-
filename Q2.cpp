// Working of C++ Pointers

#include <iostream>
using namespace std;
int main()
{
    int *p, var;
    var = 5;
    p = &var;
    cout << "The Value of (var) is:  " << var << endl;
    cout << "The Address of (var) is:  " << &var << endl
         << endl;
    cout << "The Value of (pointer) is:  " << *p << endl;
    cout << "The Address of (pointer) is:  " << p << endl;
}