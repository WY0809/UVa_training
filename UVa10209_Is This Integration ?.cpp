#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double PI = M_PI;

int main()
{
    double length;
    while(cin >> length){
        double rest = length * length - (length * length * PI / 6) - (length * length * sqrt(3) / 4);\
        double dot = length * length - (length * length * PI / 4) - 2 * rest;
        double stripe = length * length - 4 * (rest + dot);
        cout<<fixed<< std::setprecision(3)<<stripe<<" "<<dot*4<<" "<<rest * 4<<endl;
    }

    return 0;
}
