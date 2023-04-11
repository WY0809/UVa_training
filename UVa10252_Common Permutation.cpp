//因為測資不一定每一行都有英文字母，故從cin>>a>>b改用getline，如此才能讀取到空白鍵
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a,b;
    while(getline(cin, a)){
        getline(cin, b);
        int A[26]={0};
        int B[26]={0};
        
        for(int i = 0;i<a.size();i++){
            A[(int)a[i]-97]++;
        }
        for(int i=0 ; i<b.size();i++){
            B[(int)b[i]-97]++;
        }
        
        for(int i=0;i<26;i++){
            if(A[i]>B[i]){
                A[i] = B[i];
            }
        }
        for(int i=0;i<26;i++){
            if(A[i]!=0){
                for(int j=0;j<A[i];j++){
                    cout<<(char)(i+97);
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
