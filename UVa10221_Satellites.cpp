#include <iostream>
#include <string>
#include <cmath>
using namespace std;

#define PI acos(-1)

int main()
{
    int s;
    double a;
    string type;
    
    while(cin >> s >> a >>type){
        s += 6440;
        if(type == "min"){
            a /= 60;
        }
        if(a>180){
            a = 360 - a;
        }
        printf("%.6f ",abs(2*PI*s *a/360));
        
        a = a / 2 * PI / 180;
        printf("%.6f\n",abs(2*s*sin(a)));
    }
    return 0;
}
