#include <iostream>
using namespace std;

int main()
{
    double a[2],b[2],c[2],d[2];
    
    while(cin>>a[0]>>a[1]>>b[0]>>b[1]>>c[0]>>c[1]>>d[0]>>d[1]){
        if(a[0]==c[0]&&a[1]==c[1]){
            printf( "%.3f %.3f\n", b[0]+d[0]-c[0],b[1]+d[1]-c[1]);
        }else if(a[0]==d[0]&&a[1]==d[1]){
            printf( "%.3f %.3f\n", b[0]+c[0]-d[0],b[1]+c[1]-d[1]);
        }else if(b[0]==c[0]&&b[1]==c[1]){
            printf( "%.3f %.3f\n", a[0]+d[0]-c[0],a[1]+d[1]-c[1]);
        }else if(b[0]==d[0]&&b[1]==d[1]){
            printf( "%.3f %.3f\n", a[0]+c[0]-d[0],a[1]+c[1]-d[1]);
        }
    }
    return 0;
}
