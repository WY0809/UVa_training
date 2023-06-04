#include <iostream>
#include <string.h>
#include <cctype>
#include <algorithm>
using namespace std;

int main()
{
    int K,E;
    int kase = 1;
    while(cin >> K >> E){
      
        string keyword[K];
        for(int i = 0 ; i < K ; i++){
            cin >>keyword[i];
        }
        
        cin.get();
        string excuse[E],excuses[E];
        for(int i = 0 ; i < E ; i++){
           getline(cin,excuse[i]);
           excuses[i] = excuse[i] ;
           transform(excuse[i].begin(), excuse[i].end(), excuse[i].begin(), ::tolower);
        }
        
        int count[E] = {0};
        for(int i = 0 ; i < E ; i++){
            for(int j = 0 ; j < K ; j++){
                size_t found = excuse[i].find(keyword[j]);
                if (found != string::npos && !isalpha(excuse[i][found-1]) && !isalpha(excuse[i][found+keyword[j].length()])) {
                    count[i]++;
                }
            }
        }
      
        cout<<"Excuse Set #"<<kase<<endl;
        kase++;
        for(int i = 0 ; i < E ; i++){
            if(count[i] == *max_element(count, count + E)){
                cout<<excuses[i]<<endl;
            }
        }
        cout<<endl;
    }
    return 0;
}
