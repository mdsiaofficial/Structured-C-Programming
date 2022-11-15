#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

#define ll long long
#define ld long double
#define pi 3.14159
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))

int main()
{
    float p, t, r, simple, compound;
    cin >> p >> t >> r;

    simple = p * t * (r / 100);
    float temp = 1+(r/100);
    compound = p * (pow(temp, t) - 1);

    cout << "Simple: " << simple << endl;
    cout << "Compound: " << compound << endl;
    

    return 0;
}