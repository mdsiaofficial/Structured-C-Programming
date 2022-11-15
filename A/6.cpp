#include <iostream>
#include <iomanip>
using namespace std;

#define pi 3.14159
#define fs(n) fixed<<setprecision(int(n))

float tofah(float c){

    //float fah = (c * (9 / 5)) + 32; // eita vul
    float fah3 = ((c * 9) / 5) + 32; // right
    float fah2 = (c * 1.8) + 32;  // right
    return fah3;
}

int main()
{

    float cel;
    cin >> cel;

    cout << "Fahrenheit: " << tofah(cel) << endl;


    return 0;
}