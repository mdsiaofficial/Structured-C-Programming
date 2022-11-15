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

    float a, area;
    cin >> a;
    area = (sqrt(3) / 4) * pow(a, 2); // right
    //area = (sqrt(3)*pow(a,2))/4; // right
    
    cout << fs(2) <<"Area "<< area << endl;

    return 0;
}