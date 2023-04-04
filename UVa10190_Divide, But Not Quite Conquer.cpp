#include<iostream>
#include <vector>
using namespace std;
int main(){


   long int n, m;
   vector<long int> list;
   bool isBoring;
   
   while (cin >> n >> m){
       isBoring = false;
       list.clear();

       if (n < m || m <= 1 || n <= 1){
           cout << "Boring!" << endl;
       } else {
           for (; n > 1; n /= m){
               if (n % m == 0){
                   list.push_back(n);
               } else {
                   isBoring = true;
                   break;
               }
           }
           list.push_back(1);
           if (!isBoring){
               cout << list[0];
               for (int i = 1; i < list.size(); i++){
                   cout << " " << list[i];
               }
               cout << endl;
           }else{
               cout << "Boring!" << endl;
           }
       }
   }
   return 0;
}
/* 未通過
#include <iostream>

using namespace std;

int main()
{
    int n, m, i = 1;
    while (1) {
        
        cin >> n;
        cin >> m;
        int a[33];
        a[1] = n;

        while (a[i] != 1 && a[0] != 1 && m >= 1 && n >=1) {
            if (a[i] % m == 0) {
                a[i + 1] = a[i] / m;
                i++;
            }
            else {
                a[0] = 1;
            }
        }
        if (a[0] == 1 || m == 0 || m==1) {
            cout << "Boring!" << endl;
            a[0] = 0;
        }
        else if (a[i] == 1) {
            for (int j = 1; j <= i; j++) {
                cout << a[j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
*/

