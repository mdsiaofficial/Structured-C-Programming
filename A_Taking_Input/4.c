#include <iostream>
using namespace std;
#define pi 3.14159
int main()
{
    cout << "Enter the values:" << endl;
    float b, h, area;

    cin >> b >> h;

    area = (1 / 2) * b * h;

    cout << "Area: " << area << endl;

    return 0;
}