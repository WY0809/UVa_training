#include <iostream>
#include <string>
using namespace std;

int main()
{
    int kase;
    cin>>kase;
    while(kase--){
        int data;
        cin>>data;
        string maker[data];
        int low[data],high[data];
        for(int i = 0 ; i < data ; i++){
            cin >> maker[i] >> low[i] >> high[i];
        }
        
        int query;
        cin >> query;
        for(int i = 0 ; i < query ; i++){
            int price;
            cin >> price;
            int times = 0;
            string ans;
            for(int j = 0 ; j < data ; j++){
                if(price >= low[j] && price <= high[j]){
                    ans = maker[j];
                    times++;
                }
            }
            
            if(times == 1)
                cout<<ans<<endl;
            else
                cout<<"UNDETERMINED"<<endl;
        }
        if(kase != 0)
            cout<<endl;
    }
    return 0;
}
