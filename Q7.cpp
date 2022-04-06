/// C++ Program to insert and display data entered by using pointer notation.
#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    // Insert data using pointer notation
    cout << "Enter The 5 Values: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> *(arr + i);
    }

    // Display data using pointer notation
    cout << "The Values are: ";
    for (int i = 0; i < 5; i++)
    {
        cout << *(arr + i) << " ";
    }
}