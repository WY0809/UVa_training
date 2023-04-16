#include <iostream>
#include <string>
using namespace std;

int main()
{
    int kase;
    cin>>kase;
    
    int frq[26]={0};
    string str[kase+1];
    for(int i=0;i<kase+1;i++){
        getline(cin,str[i]);
        for(int j = 0 ; j < str[i].size() ; j++){
            if((int)str[i][j]>=97 && (int)str[i][j]<=122){
                frq[(int)str[i][j]-97]++;
            }else if((int)str[i][j]>=65 && (int)str[i][j]<=90){
                frq[(int)str[i][j]-65]++;
            }
        }
    }
    
    int max=0;
    for(int i =0;i<26;i++){
        if(frq[i]>max){
            max = frq[i];
        }    
    }
    
    for(int j = max ; j>0 ; j--){
        for(int i =0;i<26;i++){
            if(frq[i] == j){
                cout<<(char)(i+65)<<" "<<frq[i]<<endl;
            }
        }
    }
    
    return 0;
}
