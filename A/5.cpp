#include <iostream>
#include <iomanip>
using namespace std;

#define pi 3.14159
#define fs(n) fixed<<setprecision(int(n))

int main()
{
    int c;
    cin >> c;
    int m = c / 100;
    int km = c / 100000;

    cout << "Meter :" << m << endl<<"Kilometer: "<<km<<endl;
    
    return 0;
}