#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s)){
        int N = 1;
        int R = 0;
        bool minus = false;
        for(int i = 0;i<s.size();i++){
            int temp = 0;
            if((int)s[i] == 45){
                minus = true;
            }else if((int)s[i] >= 97){
                R+=(int)s[i]-61;
                temp = (int)s[i]-61;
            }else if((int)s[i] >= 65){
                R+=(int)s[i]-55;
                temp = (int)s[i]-55;
            }else if((int)s[i] >= 48){
                R+=(int)s[i]-48;
                temp = (int)s[i]-48;
            }
            
            if(temp > N){
                N = temp;
            }
        }
        if(minus)
            R*=-1;
            
        int ans=0;
        for(int i = 62 ; i > N ; i--){
            if(R%(i-1) == 0){
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
