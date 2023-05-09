#include <iostream>

using namespace std;

int main()
{
    int kase;
    cin>>kase;
    while(kase--){
        int L;
        cin >> L;
        int train[L];
        for(int i = 0 ; i < L ; i++){
            cin >> train[i];
        }
        
        int count = 0;
        for(int i = 0 ; i < L-1 ; i++){
            for(int j = 0 ; j < L-1 ; j++){
                if(train[j] > train[j+1]){
                    int temp = train[j];
                    train[j] = train[j+1];
                    train[j+1] = temp;
                    count++;
                }
            }
        }
        
        cout<<"Optimal train swapping takes "<<count<<" swaps."<<endl;
    }
    return 0;
}
