#include <iostream>
#include <string>
using namespace std;

int main()
{
    int kase;
    cin >> kase;
    while(kase--){
        string input;
        cin>>input;
        
        int score = 0, temp = 1;
        for(int i = 0; i < input.length(); i++){
            if(input[i] == 'O'){
                score += temp;
                temp++;
            }else{
                temp = 1;
            }
        }
        
        cout<<score<<endl;
    }
    return 0;
}
