#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double L,W;
    int kase=1;
    while(cin>>L>>W){
        // if(kase!=1){
        //     cout<<endl;
        // }
        // kase++;
        
        double x_max = ((L + W) - sqrt( L*L + W*W - L*W))/6;
        double x_min = L > W ? W/2 : L/2;
        cout<< fixed << setprecision(3) << x_max + 1e-8 <<" "<< 0.000 <<" "<< x_min + 1e-8<<endl;
    }

    return 0;
}
