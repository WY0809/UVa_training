#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
    int number;
    cout<<"PERFECTION OUTPUT"<<endl;
    while(cin >> number && number){
        vector<int> divisor ;
        if(number!=1){
            divisor.push_back(1);
        }
        for(int i = 2 ; i < number ; i++){
            if(divisor[divisor.size()-1] == i){
                break;
            }
            
            if(number % i == 0){
                divisor.push_back(i);
                if(number / i != i){
                    divisor.push_back(number/i);
                }
            }
        }
        
        int sum = 0;
        for(int i = 0 ; i < divisor.size() ; i++){
            sum += divisor[i];
        }
        
        if(sum == number){
            cout<<setw(5)<<number<<"  PERFECT"<<endl;
        }else if(sum > number){
            cout<<setw(5)<<number<<"  ABUNDANT"<<endl;
        }else if(sum < number){
            cout<<setw(5)<<number<<"  DEFICIENT"<<endl;
        }
    }
    cout<<"END OF OUTPUT"<<endl;
    return 0;
}
