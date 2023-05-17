#include <iostream>

using namespace std;

int main()
{
    int L,H,R;
    int leftmost=10000,rightmost=0;
    int skyline[10001] = {0};
    while(cin>>L>>H>>R){
        for(int i = L;i<R;i++){
            if(H>skyline[i]){
                skyline[i] = H;
            }
        }
        
        if(L<leftmost){
            leftmost = L;
        }
        
        if(R>rightmost){
            rightmost = R;
        }
    }
    
    int Height = 0 ;
    for(int i = leftmost ; i<=rightmost;i++){
        if(Height != skyline[i]){
            if(i == rightmost){
                cout<<i<<" "<<skyline[i]<<endl;
            }else{
                cout<<i<<" "<<skyline[i]<<" ";
                Height = skyline[i];
            }
        }
    }
    return 0;
}
