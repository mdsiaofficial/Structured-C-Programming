#include <iostream>
#include <iomanip>
using namespace std;

#define ll long long
#define ld long double
#define pi 3.14159
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))

int main()
{
    int all;
    cin >> all;

    int years = all / 365;
    int weeks = (all % 365) / 7;
    int days = (all % 365) % 7;

    cout << "Years: " << years << " Weeks: " << weeks << " Days: " << days << endl;
    return 0;
}