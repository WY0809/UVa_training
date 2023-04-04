#include <iostream>
using namespace std;
int f(int input){
    int sum = 0;
    for(int i = 0 ; i < 10 ; i++){
        sum = sum + input % 10;
        input /= 10;
    }
    return sum;
}
int main(){
    int n;
    while(1){
        cin >> n;
        if(n > 0 && n <= 2000000000){
            while(n / 10 != 0){
                n=f(n);
            }
            cout << n << endl;    
        }else{
        break;
        }
    }
}


