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
    int a1, a2, a3;
    cin >> a1 >> a2;
    a3 = 180 - (a1 + a2);
    cout << "3rd angle: " << a3 << endl;

    return 0;
}