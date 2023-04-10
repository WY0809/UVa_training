#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    
    for(int i =0;i<T;i++){
        int N, P;
        cin>>N>>P;
        int h[P];
        for(int j =0;j<P;j++){
            cin>>h[j];
        }
        
        
        bool H[N+1]={false};
        for(int j =0;j<P;j++){
            for(int k =1; h[j]*k <= N ;k++){
                H[h[j]*k] =true;
                if(h[j]*k %7==6||h[j]*k %7==0 ){
                    H[h[j]*k] =false;
                }
            }    
        }
        
        
        int days=0;
        for(int j =1;j<N+1;j++){
            if(H[j])
                days+=1;
        }
        cout<<days<<endl;
    }
    return 0;
}
