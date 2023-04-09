#include <iostream>

using namespace std;

int GCD(int i,int j){
    int ans;
    for(int k = 1; k<i+1;k++){
        if(i%k == 0 && j%k == 0){
            ans = k;
        }
    }
    return ans;
}

int main()
{
    int N;
    while(cin>>N && N!=0){
        int G = 0;
        for(int i = 1 ;i<N;i++){
            for(int j =i+1;j<=N;j++){
                G+=GCD(i,j);
            }    
        }
        cout << G<<endl;
    }
    return 0;
}
