#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cctype> 
#include <algorithm>
using namespace std;

int main()
{
    int n;
    int kase = 1;
    while(cin >> n){
        cin.get();
        
        if(kase != 1){
            cout<<endl;
        }
        kase++;
        
        vector<string> str;
        string input;
        while(getline(cin,input) && input != "EndOfText"){
            transform(input.begin(), input.end(), input.begin(), ::tolower);
            str.push_back(input);
        }
        
        vector<string> word;
        
        for(int i = 0 ; i < str.size() ; i++){
            int temp = 0;
            for(int j = 0 ; j < str[i].length() ; j++){
                if(!isalpha(str[i][j])){
                    word.push_back(str[i].substr(temp , j - temp));
                    temp = j + 1;
                }else if(j == str[i].length() - 1){
                    word.push_back(str[i].substr(temp , j - temp + 1));
                }
            }
        }
        
        // for(int i = 0 ; i < word.size() ; i++){
        //     cout<<word[i]<<endl;
        // }
        
        map<string,int> count;
        for(int i = 0 ; i < word.size() ; i++){
            if(word[i] != "")
                count[word[i]]++;
        }
        
        bool check = false;
        for (const auto& it : count) {
            if(it.second == n){
                cout << it.first << endl;
                check = true;
            }
        }
        if(!check){
            cout<<"There is no such word."<<endl;
        }
    }
    return 0;
}
