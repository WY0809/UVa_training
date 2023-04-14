#include <iostream>
using namespace std;

int main()
{
    int N,kase=1;
    
    while(cin>>N && N>=2 && N<=100){
        bool B2 = true;
        
        //輸入值並判斷有無違反規定
        int b[N];
        for(int i = 0;i<N;i++){
            cin>>b[i];
            if(b[i]<1 || i!=0 && b[i]<=b[i-1]){
                B2 = false;
            }
            
        }
        
        //建立sum矩陣，記錄各種組合
        int sum[N*(N+1)/2]={0},k=0;
        for(int i = 0;i<N;i++){
            for(int j = i;j<N;j++){
                sum[k++] = b[i] + b[j];
            }
        }
        
        //判斷有無重複的sum值
        for(int i =0;i<N*(N+1)/2;i++){
            for(int j =i+1;j<N*(N+1)/2;j++){
                if(sum[i]==sum[j]){
                    B2 = false;
                }
            }
        }
        
        //輸出
        if(B2)
            cout<<"Case #"<<kase<<": It is a B2-Sequence.\n"<<endl;
        else
            cout<<"Case #"<<kase<<": It is not a B2-Sequence.\n"<<endl;
        kase++;
    }

    return 0;
}
