#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    vector<int> fib;
    fib.push_back(1);
    fib.push_back(2);
    int i = 2;
    while(fib[i-1] + fib[i-2] < 100000000){
        fib.push_back(fib[i-1]+fib[i-2]);
        i++;
    }
    
    int kase;
    cin>>kase;
    for(i = 0;i<kase;i++){
        string ans="";
        int num;
        cin>>num;
        
        cout<<num<<" = ";
        for(int j = fib.size()-1 ; j >= 0 ; j--){
            if(num>=fib[j] ){
                num-=fib[j];
                ans += "1";
            }else if(!ans.empty()){
                ans += "0";
            }
        }
        cout<<ans<<" (fib)"<<endl;
    }
    return 0;
}
