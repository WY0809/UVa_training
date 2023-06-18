#include <iostream>
#include <vector>
#include <string>
using namespace std;

int number[10][7] = {{1,1,1,1,1,1,0},{0,1,1,0,0,0,0},{1,1,0,1,1,0,1},{1,1,1,1,0,0,1},{0,1,1,0,0,1,1},
                     {1,0,1,1,0,1,1},{1,0,1,1,1,1,1},{1,1,1,0,0,0,0},{1,1,1,1,1,1,1},{1,1,1,1,0,1,1}};
int main()
{
    int s;
    string n;
    while(cin >> s >> n && s != 0 || n != "0"){
        vector<int> num;
        for(int i = 0 ; i < n.length() ; i++){
            num.push_back(n[i] -'0');
        }
        
        string display[2*s + 3];
        for(int i = 0 ; i < 2*s+3 ; i++){
            for(int j = 0 ; j < num.size()  ; j++){
                if(i % (s+1) == 0){
                    display[i] += " ";
                    for(int k = 0 ; k < s ; k++){
                        if(i == 0 && number[num[j]][0] == 1){
                            display[i] += "-";
                        }else if(i == s+1 && number[num[j]][6] == 1){
                            display[i] += "-";
                        }else if(i == 2*s+2 && number[num[j]][3] == 1){
                            display[i] += "-";
                        }else{
                            display[i] += " ";
                        }
                    }
                    display[i] += " ";
                }else{
                    if( i < s+1 && number[num[j]][5] == 1){
                        display[i] += "|";
                    }else if( i > s+1 && number[num[j]][4] == 1){
                        display[i] += "|";
                    }else{
                         display[i] += " ";
                    }
                    
                    for(int k = 0 ; k < s ; k++){
                        display[i] += " ";
                    }
                    
                    if( i < s+1 && number[num[j]][1] == 1){
                        display[i] += "|";
                    }else if( i > s+1 && number[num[j]][2] == 1){
                        display[i] += "|";
                    }else{
                         display[i] += " ";
                    }
                }
                
                if(j != num.size()-1){
                    display[i] += " ";
                }
            }
        }
        for(int i = 0 ; i < 2*s+3 ; i++){
            cout<<display[i]<<endl;
        }
        cout<<endl;
    }
    return 0;
}
