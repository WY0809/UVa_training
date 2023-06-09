#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string str;
    while(getline(cin,str)){
        int count = 0;
        for(int i = 0 ; i < str.length() ; i++){
            if(isalpha(str[i]) && !isalpha(str[i+1])){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
