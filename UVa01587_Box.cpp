#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int w,h;
    while(cin >> w >>h){
        vector<pair<int,int>> pallet;
        vector<int> size;
        if(!count(size.begin(), size.end(),w)){
                size.push_back(w);
        }
        if(!count(size.begin(), size.end(),h)){
                size.push_back(h);
        }
        
        if(w>h){
            pallet.push_back(pair<int,int> (h,w));
        }else{
            pallet.push_back(pair<int,int> (w,h));
        }
        for(int i = 0 ; i < 5 ; i++){
            cin >> w >> h;
            
            if(!count(size.begin(), size.end(),w)){
                size.push_back(w);
            }
            if(!count(size.begin(), size.end(),h)){
                size.push_back(h);
            }
            
            if(w > h){
                pallet.push_back(pair<int,int> (h,w));
            }else{
                pallet.push_back(pair<int,int> (w,h));
            }
        }
        
        // for(int i = 0 ; i < size.size() ; i++){
        //     cout<<size[i]<<" ";
        // }
        // cout<<endl;
        // for(int i = 0 ; i < 6 ; i++){
        //     cout<<pallet[i].first<<" "<<pallet[i].second<<endl;
        // }
        
        bool check = true;
        
        int count = 0 ;
        int square = 0;
        for (vector<pair<int,int>>::iterator i = pallet.begin(); i != pallet.end(); ++i){
            for (vector<pair<int,int>>::iterator j = i + 1; j != pallet.end(); ++j){
                if(*i == *j && *i != pair<int,int> (0,0)){
                    if((*i).first == (*i).second && size.size() == 3)
                        check = false;
                    if((*i).first == (*i).second && size.size() == 2)
                        square++;
                    //cout<<count<<" "<<(*i).first<<" "<<(*i).second<<" "<<(*j).first<<" "<<(*j).second<<endl;
                    *i = pair<int,int> (0,0);
                    *j = pair<int,int> (0,0);
                    count++;
                }
                
            }
        }
        if(size.size() > 3 || count != 3 || (square >= 2 && size.size()==2))
            check = false;
            
            
        if(check)
            cout<<"POSSIBLE"<<endl;
        else
            cout<<"IMPOSSIBLE"<<endl;
        
    }

    return 0;
}
