#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s)){
        int base = 1;
        int sum = 0;
        for(int i = 0;i<s.size();i++){
            int temp = 0;
            if((int)s[i] >= 97){
                temp = (int)s[i]-61;
            }else if((int)s[i] >= 65){
                temp = (int)s[i]-55;
            }else if((int)s[i] >= 48){
                temp = (int)s[i]-48;
            }
            sum += temp;
            if(temp > base){
                base = temp;
            }
        }
        
        int ans=0;
        for(int i = 62 ; i > base ; i--){
            if(sum % (i-1) == 0){
                ans = i;
            }
        }
        
        if(ans){
            cout<<ans<<endl;
        }else{
            cout<<"such number is impossible!"<<endl;
        }
    }
    return 0;
}
