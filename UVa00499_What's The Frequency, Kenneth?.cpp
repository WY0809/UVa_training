#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string str;
    while(getline(cin,str)){
        int freq[200] = {0};
        for(int i = 0 ; i < str.length() ; i++){
            if(isalpha(str[i]))
                freq[int(str[i])]++;
        }
        int temp = 0;
        for(int i = 0 ; i < 200 ; i++){
            if(freq[i]>temp){
                temp = freq[i];
            }
        }
        for(int i = 0 ; i < 200 ; i++){
            if(freq[i] == temp){
                cout<<char(i);
            }
        }
        cout<<" "<<temp<<endl;
    }
    return 0;
}
