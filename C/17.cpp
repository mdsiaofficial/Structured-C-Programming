#include <iostream>
#include <iomanip>
using namespace std;

#define pi 3.14159
#define fs(n) fixed<<setprecision(int(n))


int main()
{   

    int unit;
    float a, total, surcharge;

    //printf("Enter total units: ");
    cout << "Enter total units: " << endl;
    cin >> unit;
    //scanf("%d", &unit);

    if(unit <= 50)
    {
        a = unit * 0.50;
    }
    else if(unit <= 150)
    {
        a = 25 + ((unit-50) * 0.75);
    }
    else if(unit <= 250)
    {
        a = 100 + ((unit-150) * 1.20);
    }
    else
    {
        a = 220 + ((unit-250) * 1.50);
    }

    surcharge = a * 0.20;
    total  = a + surcharge;

    //printf("Electricity Bill = Rs. %.2f", total);
    cout <<fs(2)<< "Electricity Bill = Rs. " << total << endl;

//
//
//
//


//
    return 0;
}