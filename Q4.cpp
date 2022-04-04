// C++ Void Pointer

#include <iostream>
using namespace std;
int main()
{
    void *p;
    float f = 2.3f;
    // assu=ign the float address to pointer
    p = &f;

    cout << "The address of (float) is:  " << &f << endl;
    cout << "The Address of (pointer) is:  " << p << endl;
}
