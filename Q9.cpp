// Passing by reference using pointers

#include <iostream>
using namespace std;
void swap(int *n1, int *n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
int main()
{
    int a = 5;
    int b = 20;
    cout << "Before Swapping:\n";
    cout << "a is: " << a << endl;
    cout << "b is: " << b << endl;

    swap(&a, &b);
    cout << "\nAfter Swapping:\n";
    cout << "a is: " << a << endl;
    cout << "b is: " << b << endl;
}