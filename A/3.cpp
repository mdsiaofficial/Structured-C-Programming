#include <iostream>
using namespace std;
#define pi 3.14159
int main()
{
    cout << "Enter the values:" << endl;
    float r;
    float d, c, a;

    cin >> r;

    d = 2*r;
    c = 2 * pi * r;
    a = pi * r * r;

    cout << "Diameter: " << d <<endl;
    cout << "Circumference: " << c <<endl;
    cout << "Area: " << a <<endl;

    return 0;
}