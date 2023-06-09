#include <iostream>
#include <string>
#include <sstream>
#include <map>
using namespace std;

int main()
{
    int kase;
    cin>>kase;
    cin.get();
    while(kase--){
        cin.get();
        string a,b;
        getline(cin,a);
        getline(cin,b);
        stringstream ss,ss2;
        ss << a;
        ss2 << b;
        
        int n = 1;
        for(int i = 0 ; i < a.length() ; i++){
            if(a[i] == ' '){
                n++;
            }
        }
        
        map<int,string> ans;
        for(int i = 0 ; i < n ; i++){
            int temp;
            string tempp;
            ss>>temp;
            ss2>>tempp;
            ans[temp] = tempp;
        }
        
        for(int i = 1 ; i <= n ; i++){
            cout<<ans[i]<<endl;
        }
        if(kase != 0){
            cout<<endl;
        }
    }

    return 0;
}
