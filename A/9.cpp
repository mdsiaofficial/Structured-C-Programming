#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int x,y;
    int p;
    
    cout << "Enter the values: " << endl;

    cin >> x >> y;
    p = pow(x, y);

    cout << p << endl;
    return 0;
}