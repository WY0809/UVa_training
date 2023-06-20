#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin >> n && n != 0){
        int x,y,z,l;
        cin >> x >> y >> z >> l;
        n--;
        int x_lower = x,y_lower = y ,z_lower = z;
        int x_upper = x+l,y_upper = y+l,z_upper = z+l;
        while(n--){
            cin >> x >> y >> z >> l;
            if(x > x_lower){
                x_lower = x;
            }
            if(y > y_lower){
                y_lower = y;
            }
            if(z > z_lower){
                z_lower = z;
            }
            
            if(x + l < x_upper){
                x_upper = x + l;
            }
            if(y + l < y_upper){
                y_upper = y + l;
            }
            if(z + l < z_upper){
                z_upper = z + l;
            }
        }
        if((x_upper - x_lower) > 0 && (y_upper - y_lower) > 0 && (z_upper - z_lower) > 0)
            cout<<(x_upper - x_lower)*(y_upper - y_lower)*(z_upper - z_lower)<<endl;
        else
            cout<<0<<endl;
    }

    return 0;
}
