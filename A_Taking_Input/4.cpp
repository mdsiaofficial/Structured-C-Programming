#include <iostream>
#include <iomanip>
using namespace std;
#define pi 3.14159
#define fs(n) fixed<<setprecision(n)
int main()
{
    cout << "Enter the values:" << endl;
    float b, h, area;

    cin >> b >> h;

    area = (b*h)/2;

    cout << fs(2) <<"Area: " << area << endl;
    //printf("%f", area);
    return 0;
}