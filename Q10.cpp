// pointer to structure

#include <iostream>
using namespace std;
struct str
{
    int feet;
    float inch;
};

int main()
{
    str *p, d;
    p = &d;

    cout << "Enter The Feet:  ";
    cin >> (*p).feet;
    cout << "Enter The inch:  ";
    cin >> (*p).inch;

    cout << "feet:" << (*p).feet << " inch:" << (*p).inch;
}
