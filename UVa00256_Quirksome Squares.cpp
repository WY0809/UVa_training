#include <iostream>
#include <iomanip>
using namespace std;

int range[5] = {0,9,99,999,9999};

int main()
{
    int N;
    while(cin>>N){
        N /= 2;
        for(int i = 0;i < range[N]; i++){
            for(int j = 0;j < range[N]; j++){
                if((i+j) * (i+j) == i * (range[N]+1) + j){
                    cout<<setw(N)<<setfill('0')<<i<<setw(N)<<setfill('0')<<j<<endl;
                }
            }
        }
    }
    return 0;
}
