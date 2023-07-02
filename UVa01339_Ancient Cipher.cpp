#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    string a,b;
    while(cin >>a>>b){
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
        vector<int> arra,arrb;
        arra.push_back(1);
        arrb.push_back(1);
        for(int i = 1 ; i < a.length() ; i++){
            if(a[i - 1] == a[i]){
                arra[arra.size()-1] ++;
            }else{
                arra.push_back(1);
            }
            
            if(b[i - 1] == b[i]){
                arrb[arrb.size()-1] ++;
            }else{
                arrb.push_back(1);
            }
        }
        
        sort(arra.begin(),arra.end());
        sort(arrb.begin(),arrb.end());
        
        if(arra == arrb)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;    
    }
    return 0;
}
