#include <iostream>
#include <string>
#include <sstream>
#include <cstring>
using namespace std;

int main()
{
    bool prime[1000001];//建質數表 0~1000000
    memset(prime, true, sizeof(prime));//全輸入true
    prime[0] = prime[1] =false;
    
    for(int i = 2 ; i < sizeof(prime) ;i++){
        if(prime[i]){
            for(int j = 2; i*j < sizeof(prime) ; j++){
                prime[i*j] = false;
            }
        }
    }
    
    string num;
    while(cin >> num){
        stringstream ss;
        ss<<num;
        int N1,N2;
        ss>>N1;
        
        ss.clear();
        for(int i = num.length()-1 ; i >= 0 ; i--){
            ss<<num[i];
        }
        ss>>N2;
        
        
        if(prime[N1] && prime[N2] && N1 != N2){
            cout << N1 <<" is emirp."<<endl;
        }else if(prime[N1]){
            cout << N1 <<" is prime."<<endl;
        }else{
            cout << N1 <<" is not prime."<<endl;
        }
    }
    return 0;
}
