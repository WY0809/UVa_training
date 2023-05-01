#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int count(int query,int base,int costs[]){
    int cost = 0;
    while(query){
        cost += costs[query % base];
        query /= base;
    }
    return cost;
}

int main()
{
    int kase;
    cin >> kase;
    for(int i = 0 ; i < kase ; i++){
         
        int costs[36]={0};
        for(int j = 0 ; j < 36 ; j++){
            cin >> costs[j];
        }
        
        cout<<"Case "<<i+1<<":"<<endl;
        
        int test;
        cin >> test;
        while(test--){
            int query;
            cin >> query;
            
            vector<int> cost;
            for(int j = 2 ; j <= 36;j++){
                cost.push_back(count(query,j,costs));
            }
            
            cout<<"Cheapest base(s) for number "<<query<<":";
            for(int j = 0 ; j < cost.size();j++){
                if(cost[j] == *min_element(cost.begin() , cost.end())){
                    cout << " " << j+2;
                }
            }
            cout<<endl;
        }
        
        if(i != kase -1){
            cout<<endl;
        }
    }
    return 0;
}
