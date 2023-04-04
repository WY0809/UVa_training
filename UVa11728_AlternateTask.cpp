#include <iostream>
using namespace std;

int sum_factors(int n){
    int sum =0;
    for(int i = 1 ;i < n+1 ; i++){
        if(n%i == 0){
            if(i < (n /i)){
                sum += i + (n/i);
            }else if(i == (n /i)){
                sum += i;
            }
        }
    }
    return sum;
}

int main(){
    int input,count=1;
    do{
        //input
        cin >> input;
        
        //判斷有無某數因數和恰好為input，有的話是多少?
        int max = 0;
        bool find = false;
        for(int i = 1;i < input+1;i++){
            if(input == sum_factors(i)){
                max = i;
                find =true;
            }
        }
        if(find == false){
            max = -1;
        }
        
        //output
        if(input !=0)
            cout << "Case " <<count <<": "<<max<<endl;
        count++;
        
    }while(input!=0);
    return 0;
}
