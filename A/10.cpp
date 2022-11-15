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
    int number;
    cin >> number;
    float root = sqrt(number);
    cout << "Square Root of " << number << " is " << root << endl;
    return 0;
}