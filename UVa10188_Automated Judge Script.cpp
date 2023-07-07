#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    int n , m;
    string nn,mm;
    int kase = 1;
    while(getline(cin,nn) && stoi(nn) != 0){
        n = stoi(nn);
        string ans[n] = {""};
        for(int i = 0; i < n ; i++){
            getline(cin,ans[i]);
        }
        //for(int i = 0; i < n ; i++){
        // cout<<ans[2]<<endl;
        //}
        
        getline(cin,mm);
        m = stoi(mm);
        string output[m] = {""};
        for(int i = 0; i < m ; i++){
            getline(cin,output[i]);
        }
        // for(int i = 0; i < m ; i++){
        //     cout<<output[i]<<endl;
        // }
        
        
        bool accept = true;
        if(n == m){
            for(int i = 0; i < n ; i++){
                if(ans[i] != output[i]){
                    accept = false;
                }
            }
        }else{
            accept = false;
        }
        //cout<<"accept:"<<accept<<endl;
        
        string ans_num = "",output_num ="";
        
        if(accept){
           cout<<"Run #"<<kase<<": Accepted"<<endl; 
        }else{
            for(int i = 0; i < n ; i++){
                for(int j = 0; j < ans[i].length() ; j++){
                    if(isdigit(ans[i][j]))
                        ans_num += ans[i][j];
                }
            }
            for(int i = 0; i < m ; i++){
                for(int j = 0; j < output[i].length() ; j++){
                    if(isdigit(output[i][j]))
                        output_num += output[i][j];
                }
            }
            // cout<<ans_num<<endl;
            // cout<<output_num<<endl;
            if(ans_num == output_num){
                cout<<"Run #"<<kase<<": Presentation Error"<<endl; 
            }else{
                cout<<"Run #"<<kase<<": Wrong Answer"<<endl; 
            }
        }
        
        kase++;
    }

    return 0;
}
