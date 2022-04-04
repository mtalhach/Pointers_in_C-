// Printing Variable Addresses in C++

#include <iostream>
using namespace std;
int main()
{
    int var1 = 5;
    int var2 = 7;
    int var3 = 9;
    cout << "Address of Variable 1:  " << &var1 << endl;
    cout << "Address of Variable 2:  " << &var2 << endl;
    cout << "Address of Variable 3:  " << &var3 << endl;
}