#include <iostream>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    string num;
    int count = 1;
    while(getline(cin,num) && num != "0"){
        
        cout<<"Original number was "<<num<<endl;
        
        int length = 1;
        
        string d_num = num , a_num = num;
        sort(d_num.begin(), d_num.end(),greater<char>());
        sort(a_num.begin(), a_num.end(),less<char>());
        int dnum = stoi(d_num) , anum = stoi(a_num);
        
        map<int,bool> last_num;
        
        while(!last_num[dnum-anum]){
            last_num[dnum-anum] = true;
            cout<<dnum<<" - "<<anum<<" = "<<dnum - anum<<endl;
            d_num = a_num = to_string(dnum - anum);
            sort(d_num.begin(), d_num.end(),greater<char>());
            sort(a_num.begin(), a_num.end(),less<char>());
            dnum = stoi(d_num);
            anum = stoi(a_num);
            length++;
        }
        cout<<dnum<<" - "<<anum<<" = "<<dnum - anum<<endl;
        cout<<"Chain length "<<length<<endl<<endl;
    }
    return 0;
}
