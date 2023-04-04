#include <iostream>
using namespace std;

int main(){
    int test_case;
    cin >> test_case;
    
    for(int i = 0 ; i <test_case;i++){
        int days;
        cin >> days;
        int A[days];
        for (int j = 0; j<days;j++){
            cin >> A[j];
        }
        
        
        int sum=0;
        for (int j = 1; j<days;j++){
            for(int k = 0 ; k <j ;k++){
               if(A[j]>=A[k]){
                   sum+=1;
               } 
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}

