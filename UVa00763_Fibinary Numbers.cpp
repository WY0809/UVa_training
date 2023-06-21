#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool check(int sum[]){
    for(int i = 0 ; i < 100 ; i++){
        if(sum[i] > 1){
            return true;
        }
        if(sum[i] == 1 && sum [i+1] == 1){
            return true;
        }
    }
    return false;
}



int main()
{
    string a,b;
    int kase = 1;
    while(getline(cin,a) && getline(cin,b)){
        
        if(kase != 1){
            cout<<endl;
        }
        kase++;
        
        int sum[102] = {0};
        for(int i = 0 ; i < a.length() ; i++){
            sum[a.length() - 1 - i] += a[i] - '0' ;
        }
        
        for(int i = 0 ; i < b.length() ; i++){
            sum[b.length() - 1 - i] += b[i] - '0' ;
        }
        
        while(check(sum)){
            if(sum[0] > 1){
                sum[1]++;
                sum[0] -= 2;
            }
            if(sum[1] > 1){
                sum[2]++;
                sum[0]++;
                sum[1] -= 2;
            }
            for(int i = 2 ; i < 100 ; i++){
                if(sum[i] > 1){
                    sum[i + 1]++;
                    sum[i - 2]++;
                    sum[i] -= 2;
                }
            }
            for(int i = 0 ; i < 100 ; i++){
                if(sum[i] == 1 && sum [i+1] == 1){
                    sum[i + 2]++;
                    sum[i] -= 1;
                    sum[i+1] -= 1;
                }
            }
        }
        
        bool start = false;
        for(int i = 101 ; i >= 0 ; i--){
            if(sum[i] == 1)
                start = true;
            
            if(start)
                cout<<sum[i];
        }
        if(!start)
            cout<<0;
        cout<<endl;
        cin.get();
    }
    return 0;
}
