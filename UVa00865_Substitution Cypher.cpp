#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    int kase;
    cin>>kase;
    cin.get();
    cin.get();
    while(kase--){
        string a,b;
        getline(cin,a);
        getline(cin,b);
        cout<<b<<endl<<a<<endl;
        
        map<char,char> key;
        for(int i = 0 ; i < a.length() ; i++){
            key[a[i]] = b[i];
        }
        
        string str;
        while(getline(cin,str) && str !=""){
            for(int i = 0 ; i < str.length() ; i++){
                if(key[str[i]])
                    cout<<key[str[i]];
                else
                    cout<<str[i];
            }
            cout<<endl;
        }
        if(kase != 0)
            cout<<endl;
    }
    return 0;
}
