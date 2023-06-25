#include <iostream>

using namespace std;

int main()
{
    int kase;
    cin >> kase;
    while(kase--){
        int N;
        int count[10] = {0};
        cin >> N;
        for(int i = 1 ; i <= N ; i++){
            int temp = i;
            while(temp){
                count[temp%10]++;
                temp/=10;
            }
        }
        
        for(int i = 0 ; i < 10 ; i++){
            cout<<count[i];
            if(i != 9)
                cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}
