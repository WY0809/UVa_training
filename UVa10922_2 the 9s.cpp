#include <iostream>
#include <string>
using namespace std;

int main()
{
    string digit;
    while(getline(cin,digit) && digit != "0"){
        int sum = 0;
        for(int i = 0 ; i < digit.length() ; i++){
            sum += (int)(digit[i]) - '0';
        }
        
        int degree = 1;
        while(sum > 9){
            int number = sum;
            sum = 0;
            while(number){
                sum += number%10;
                number /= 10;
            }
            
            degree += 1;
        }
        
        if(sum == 9){
            cout<<digit<<" is a multiple of 9 and has 9-degree "<<degree<<"."<<endl;
        }else{
            cout<<digit<<" is not a multiple of 9."<<endl;
        }
    }
    return 0;
}
