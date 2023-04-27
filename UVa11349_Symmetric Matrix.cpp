//本題的symmetric跟一般的不太一樣

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    int kase;
    cin>>kase;
    for(int i = 0;i<kase;i++){
        int N;
        cin.get();
        cin.get();
        cin.get();
        cin.get();
        cin >> N;
        
        long long int matrix[N*N];
        for(int j = 0 ; j < N*N ; j++){
            cin >>matrix[j];
        }
        
        bool symmetric = true;
        for(int j = 0 ; j < N*N/2+1 ; j++){//到矩陣中間的位置，因為也要判斷正中間有沒有小於0
            if(N == 1 && matrix[j]>=0){
                break;
            }
            if(matrix[j] != matrix[N*N-j-1] || matrix[j]<0 || matrix[N*N-j-1]<0){ //N*N-j-1為對應的位置
                symmetric = false;
            }
        }
        
        if(symmetric){
            cout<<"Test #"<<i+1<<": Symmetric."<<endl;
        }else{
            cout<<"Test #"<<i+1<<": Non-symmetric."<<endl;
        }
    }
    return 0;
}
