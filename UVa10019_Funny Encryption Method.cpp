#include <iostream>
using namespace std;

int bitInBin(int temp){
    int b = 0;
    while(1){
            if(temp % 2 == 1){
                b += 1;
            }
            if(temp / 2 == 0){
                break;
            }
            temp /= 2;
        }
    return b;
}

int main()
{
    int kase;
    cin>>kase;
    
    for(int i = 0;i<kase;i++){
        int M;
        cin >> M;
        
        int b1 = bitInBin(M);
        
        int b2 = 0;
        while(M){
            b2 += bitInBin(M%10); 
            M /= 10;
        }
        cout<<b1<<" "<<b2<<endl;
    }
    return 0;
}
