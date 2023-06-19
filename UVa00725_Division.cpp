#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int N;
    int kase = 1;
    while(cin >> N && N != 0){
        
        if(kase!=1){
            cout<<endl;
        }
        kase++;
        
        bool any = false;
        for(int i = 1234 ; i <= 98765/N ; i++){
            int x = i*N;
            int x_temp = x, i_temp = i;
            //cout<<x_temp<<"/"<<i_temp<<endl;
            bool check[10] = {false},repeat = false;
            
            for(int j = 0 ; j <5 ;j++){
                if(!check[x_temp%10]){
                    check[x_temp%10] = true;
                }else {
                    repeat = true;
                    break;
                }
                x_temp/=10;
                
                if(!check[i_temp%10]){
                    check[i_temp%10] = true;
                }else{
                    repeat = true;
                    break;
                }
                i_temp/=10;
            }
            
            if(!repeat){
                cout<<setw(5)<<setfill('0')<<x<<" / ";
                cout<<setw(5)<<setfill('0')<<i<<" = "<<N<<endl;
                any = true;
            }
        }
        if(!any){
            cout<<"There are no solutions for "<<N<<"."<<endl;
        }
    }
    return 0;
}
