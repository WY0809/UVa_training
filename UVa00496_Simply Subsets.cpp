//本題input不要輸入重複的數字，一個數字僅輸入一次，再依據A、B大小有重疊的就pop掉，output就可以分為五種
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string str1,str2;
    while(getline(cin,str1)){
        getline(cin,str2);
        
        stringstream ss;
        ss<<str1;
        int temp;
        vector<int> A,B;
        while(ss>>temp){
            auto it = find(A.begin(), A.end(),temp);
            if (it == A.end()){
                A.push_back(temp);
            }
        }
        ss.clear();
        ss<<str2;
        while(ss>>temp){
            auto it = find(B.begin(), B.end(),temp);
            if (it == B.end()){
                B.push_back(temp);
            }
        }
        
        bool set = false;
        if(A.size() >= B.size()){
            for(int i = 0 ; i < B.size() ; i++){
                auto it = find(A.begin(), A.end(),B[i]);
                if (it != A.end()){
                    A.erase(it);
                    auto it2 = find(B.begin(), B.end(),B[i]);
                    B.erase(it2);
                    i--;
                    set = true;
                }
            }
        }else{
            for(int i = 0 ; i < A.size() ; i++){
                auto it = find(B.begin(), B.end(),A[i]);
                if (it != B.end()){
                    B.erase(it);
                    auto it2 = find(A.begin(), A.end(),A[i]);
                    A.erase(it2);
                    i--;
                    set = true;
                }
            }
        }
        
        if(A.size() == 0 && B.size() == 0){
            cout<<"A equals B"<<endl;
        }else if(A.size() == 0){
            cout<<"A is a proper subset of B"<<endl;
        }else if(B.size() == 0){
            cout<<"B is a proper subset of A"<<endl;
        }else if(set){
            cout<<"I'm confused!"<<endl;
        }else{
            cout<<"A and B are disjoint"<<endl;
        }
    }
    return 0;
}
