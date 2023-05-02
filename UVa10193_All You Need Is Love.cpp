#include <iostream>
#include <string>
using namespace std;

int transform(string s){
    int ans = 0;
    int mp = 1;
    for(int i = s.length()-1;i>=0;i--){
        if(s[i] == '1'){
            ans += mp;
        }
        mp*=2;
    }
    
    return ans;
}

int GCD(int a,int b){
    if(a % b == 0){
        return b;
    }
    return GCD(b,a % b);
}

int main()
{
    int kase;
    cin >> kase;
    cin.get();
    
    for(int i = 0 ; i < kase ; i++){
        string s1,s2;
        getline(cin , s1);
        getline(cin , s2);
        int S1 = transform(s1);
        int S2 = transform(s2);
        
        if(GCD(S1,S2) != 1){
            cout<<"Pair #"<<i+1<<": All you need is love!"<<endl;
        }else{
            cout<<"Pair #"<<i+1<<": Love is not all you need!"<<endl;
        }
    }
    return 0;
}
