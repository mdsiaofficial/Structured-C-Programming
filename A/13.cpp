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
    int a,b,c,d,e, total;
    float avrg, percentage;
    cin >> a >> b >> c >> d >> e;

    total=a+b+c+d+e;
    avrg=(a+b+c+d+e)/5;
    percentage = (total*100)/500;

    cout << "Total: " << total << endl;
    cout << "Average: " << avrg << endl;
    cout << "Percentage: " << percentage << endl;
    
    return 0;
}