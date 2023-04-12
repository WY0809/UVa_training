#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int set;
    cin>>set;
    for(int i =0; i<set;i++){
        int players,whichplayer;
        double probability;
        cin>>players>>probability>>whichplayer;
        
        
        if(probability!=0){
            double a1,d;//首項,公差
            a1 = pow(1-probability,whichplayer-1)*probability;
            d = pow(1-probability,players);
            
            //等比級數公式
            printf("%.4f\n",a1*(1/(1-d)));
        }else{
            cout<<"0.0000"<<endl;
        }
    }

    return 0;
}
