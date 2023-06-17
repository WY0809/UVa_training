#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int kase;
    cin >> kase;
    cin.get();
    while(kase--){
        int num;
        cin >> num;
        string word[num],temp[num];
        for(int i = 0 ; i < num ; i++){
            cin >> word[i];
            temp[i] = word[i];
            sort(temp[i].begin() , temp[i].end());
        }
        
        string test,test_temp;
        while(cin >> test && test != "END"){
            test_temp = test;
            cout<<"Anagrams for: "<<test<<endl;
            sort(test.begin() , test.end());
            int k = 1;
            bool any = false;
            for(int i = 0 ; i < num ; i++){
                if(test == temp[i]){
                    printf("%3d) ",k);
                    cout<<word[i]<<endl;
                    k++;
                    any = true;
                }
            }
            
            if(any == false){
                cout<<"No anagrams for: "<<test_temp<<endl;
            }
        }
        
        if(kase!=0){
            cout<<endl;
        }
    }
    return 0;
}
