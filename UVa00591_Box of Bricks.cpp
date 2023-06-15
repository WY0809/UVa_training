#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n,kase = 1;
    while(cin >> n && n != 0){
        int h[n],avg = 0;
        for(int i = 0 ;  i < n ; i++){
            cin>>h[i];
            avg += h[i];
        }
        avg /= n;
        
        int move = 0;
        for(int i = 0 ; i < n ; i++){
            move += abs(avg - h[i]);
        }
        
        cout<<"Set #"<<kase<<endl;
        cout<<"The minimum number of moves is "<<move/2<<"."<<endl<<endl;
        kase++;
    }
    return 0;
}
