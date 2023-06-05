//這題自己未想到關鍵的那幾行註解寫法，上網參考人家的想法，只能說非常巧妙，原本一直在想要怎麼重複偵測每一段period，因為覺得有規律，但又不是那麼有規律，感覺可以精簡寫出的，但自己想不出，結果一行j != j%i完美解決我的問題

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
    
