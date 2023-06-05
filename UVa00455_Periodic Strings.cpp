#include <iostream>
#include <string>
using namespace std;

int main()
{
    int kase;
    cin >> kase;
    while(kase--){
        string s;
        cin>>s;
        
        for(int i = 1 ; i <= s.length() ; i++){
            if (s.length() % i == 0){//如果滿足要求，最後的長度%len=0，所以下一個循環節開始應該是len % i == 0 的時候
            
                bool flag = true;
                for (int j = i; j < s.length(); ++j){
                    if (s[j] != s[j % i]){//非常巧妙，用j%i，可以不斷循環，一直到最後，如果都沒有改變flag的狀態就是需要的i
                        flag = false;
                        break;
                    }
                }
                
                if (flag){
                    printf("%d\n", i);
                    break;
                }
            }
        }
        
        if (kase != 0)
            printf("\n");
    }
    return 0;
}
    
