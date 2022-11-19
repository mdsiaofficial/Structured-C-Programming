#include <iostream>
using namespace std;
int main()
{
    float len, wi, peri, area;
    cin >> len >> wi;
    peri = (len + wi) * 2;
    area = len * wi;
    cout << "Perimeter: " << peri << endl<<"Area: " << area << endl;
    //
    
    return 0;
}