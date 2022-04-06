// C++ Program to display address of each element of an array

#include <iostream>
using namespace std;
int main()
{
    /*
    int *p;
    int arr[5];
    // store the address of the first
    // element of arr in ptr
    p = arr;
    // or
    p = &arr[0];
    */

    float *p;
    float arr[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "array [" << i << "]: " << &arr[i] << endl;
    }
    cout << "\n---------------------\n";
    // p=&arr[0];
    p = arr;
    for (int i = 0; i < 3; i++)
    {
        cout << "p + " << i << ": " << p + i << endl;
    }
}