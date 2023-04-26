//參考網路上別人寫的，學習stringstream使用方法

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

int main(){
    vector<int> coef;
    int x, temp;
    string s;

    while (cin >> x){
        getline(cin, s);//消除第一行的\n
        getline(cin, s);
        //cout << "s: " << s << "\n";
      
        stringstream ss(s);//將輸入進來的資料以空格分開存在ss中
        coef.clear();
        while (ss >> temp){
            coef.push_back(temp);
        }
        coef.pop_back();//pop常數項

        reverse(coef.begin(), coef.end());
        long long mul = 1;
        int ans = 0;
        for (int i = 0; i < coef.size(); i++){
            //cout << "i: " << i << " " << coef[i] << " " << ans << " " << mul << "\n";
            ans += coef[i]*(i+1)*mul;//係數 * 前面一位的次方 * X次方
            mul *= x;
        }
        cout << ans << endl;
    }
    return 0;
}
