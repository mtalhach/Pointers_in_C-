// #include <iostream>
// using namespace std;
// int main()
// {
//      void *p;
//      float *fptr;
//      float f = 5;

//      // p = &f;
//      // cout << *p;  //through error due to void pointer
//      // void pointer can't store value

//      fptr = &f;
//      cout << *fptr;
// }

// Printing the Content of Void Pointer

#include <iostream>
using namespace std;
int main()
{
    void *p;
    float f = 5;

    p = &f;

    // use type casting to print pointer content
    cout << *(static_cast<float *>(p));
}
