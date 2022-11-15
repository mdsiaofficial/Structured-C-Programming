#include <iostream>
#include <iomanip>
using namespace std;

#define pi 3.14159
#define fs(n) fixed<<setprecision(int(n))

float toCel(float f){

    //float Cel = (f - 32) / (9 / 5); //wrong
    float Cel = (f-32)/1.8;
    return Cel;
}

int main()
{

    float fah;
    cin >> fah;

    cout << "Celcius: " << toCel(fah) << endl;


    return 0;
}