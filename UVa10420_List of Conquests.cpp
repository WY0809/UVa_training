#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    int kase;
    cin>>kase;
    
    map<string,int> Lover;
    
    for(int i = 0;i<kase;i++){
        string country,name;
        cin>>country;
        getline(cin,name);
        Lover[country]++;
        
    }
    
    for(auto i:Lover){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}
