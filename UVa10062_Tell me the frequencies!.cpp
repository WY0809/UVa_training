#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    int n = 1;
    while(getline(cin,input)){
        
        if(n != 1){
            cout<<endl;
        }
        n++;
        
        int freq[128] = {0};
        
        for(int i = 0; i < input.length() ; i++){
            freq[(int)input[i]]++;
        }
        
        for(int j = 1;j<1001;j++){
            for(int i = 127; i >= 0 ; i--){
                if(freq[i] == j){
                    cout<< i <<" "<<freq[i]<<endl; 
                }
            }
        }
    }

    return 0;
}
