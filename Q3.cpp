// Changing Value Pointed by Pointers

#include <iostream>
using namespace std;
int main()
{
     int *p, var;
     var = 5;
     p = &var;
     cout << "The Value of (var) is:  " << var << endl;
     cout << "The Value of (pointer) is:  " << *p << endl
          << endl;

     *p = 20;
     cout << "The Value of (var) is:  " << var << endl;
     cout << "The Value of (pointer) is:  " << *p << endl
          << endl;
}
