#include <iostream>
#include <string>
using namespace std;

bool check(unsigned int n){
    string num = to_string(n);
    for(int i = 0 ; i < num.length()/2 ; i++){
        if(num[i] != num[num.length()- 1 - i])
            return true;
    }
    return false;
}

int main()
{
    unsigned int kase;
    cin>>kase;
    while(kase--){
        unsigned int num1,temp,count = 1;
        cin>>num1;
        temp = num1;
        string num2;
        while(temp){
            num2 += temp % 10 + '0';
            temp /= 10;
        }
        num1 += stoi(num2);
        
        while(check(num1)){
            count++;
            temp = num1;
            string num2;
            while(temp){
                //cout<<temp%10<<endl;
                num2 += temp % 10 + '0';
                temp /= 10;
            }
            num1 += stoi(num2);
        }
        cout<<count<<" "<<num1<<endl;
    }

    return 0;
}
