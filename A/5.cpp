#include <iostream>
#include <iomanip>
using namespace std;

#define pi 3.14159
#define fs(n) fixed<<setprecision(int(n))

int main()
{
    float c;
    cin >> c;
    float m = c / 100;
    float km = c / 100000;

    cout <<fs(4)<< "Meter :" << m << endl<<"Kilometer: "<<km<<endl;

    return 0;
}