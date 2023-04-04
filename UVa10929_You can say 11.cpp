#include <iostream>
#include <string>
using namespace std;

int main()
{
    string N;
    while(cin >> N && N != "0"){
        int odd=0,even=0;
        for(int i=0;i<N.size();i=i+2){
            odd += N[i]-48;
        }
        for(int i=1;i<N.size();i=i+2){
            even += N[i]-48;
        }
        odd -= even;
        
        if(odd % 11 == 0){
            cout << N <<" is a multiple of 11." << endl;
        }else{
            cout << N <<" is not a multiple of 11." << endl;
        }
        
    }
    return 0;
}
