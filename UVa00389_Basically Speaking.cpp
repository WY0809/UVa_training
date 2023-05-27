#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
    string number;
    int base1,base2;
    int temp = 1;
    while(cin >> number >>base1 >> base2 ){
        int num = stoi(number,nullptr,base1);
        //cout<<num;
        
        string ans;
        while(1){
            if(num%base2 == 10){
                ans+='A';
            }else if(num%base2 == 11){
                ans+='B';
            }else if(num%base2 == 12){
                ans+='C';
            }else if(num%base2 == 13){
                ans+='D';
            }else if(num%base2 == 14){
                ans+='E';
            }else if(num%base2 == 15){
                ans+='F';
            }else{
                ans += to_string(num % base2);
            }
            
            if(num / base2 == 0){
                break;
            }
            num /= base2;
        }
        reverse(ans.begin(), ans.end()); 
            
        if(ans.length() <= 7){
            cout<<setw(7)<<ans<<endl;
        }else{
            cout<<setw(7)<<"ERROR"<<endl;
        }
    }
    return 0;
}
