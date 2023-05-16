#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, M;
    while (cin >> N >> M && (N != 0 || M != 0)) {
        int number;
        vector<int> temp[2 * M - 1];
        //輸入並依照餘數分類
        for (int i = 0; i < N; i++) {
            cin >> number;
            temp[(number % M) + M -1].push_back(number);
        }
        //由小到大排序每個餘數QUEUE
        for (int i = 0; i < 2 * M - 1; i++) {
            sort(temp[i].begin(), temp[i].end());
        }
        //照規則SORT
        vector<int> ans;
        for (int i = 0; i < 2 * M - 1; i++) {
            for (int j = temp[i].size() - 1; j >= 0; j--) {
                if (temp[i][j] % 2 != 0) {
                    ans.push_back(temp[i][j]);
                }
            }

            for (int j = 0; j < temp[i].size(); j++) {
                if (temp[i][j] % 2 == 0) {
                    ans.push_back(temp[i][j]);
                }
            }
        }
        //輸出
        cout << N << " " << M << endl;
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << endl;
        }
    }
    cout << "0 0" << endl;
    return 0;
}
