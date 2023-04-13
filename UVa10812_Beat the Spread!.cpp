#include <iostream>

using namespace std;

int main()
{
    int kase;
    cin>>kase;
    while(kase--){
        int sum,dif;
        cin>>sum>>dif;
        
        if(sum-dif <0||(sum+dif)%2==1){
            cout<<"impossible"<<endl;
        }else {
            cout<<(sum+dif)/2<<" "<<(sum-dif)/2<<endl;
        }
    }

    return 0;
}
