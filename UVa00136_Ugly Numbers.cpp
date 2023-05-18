//本題非本人想法，參考國外大神詳解 https://www.geeksforgeeks.org/ugly-numbers/
//仍無法參透其中binary search的想法，此DP想法時間複雜度為第二好，且概念我能理解
//改天再將binary search想法研究出來，並將DP想法自己實做出來

// C++ program to find n'th Ugly number
#include <bits/stdc++.h>
using namespace std;
 
// Function to get the nth ugly number
unsigned getNthUglyNo(unsigned n)
{
    // To store ugly numbers
    unsigned ugly[n];
    unsigned i2 = 0, i3 = 0, i5 = 0;
    unsigned next_multiple_of_2 = 2;
    unsigned next_multiple_of_3 = 3;
    unsigned next_multiple_of_5 = 5;
    unsigned next_ugly_no = 1;
 
    ugly[0] = 1;
    for (int i = 1; i < n; i++) {
        next_ugly_no = min(next_multiple_of_2,min(next_multiple_of_3, next_multiple_of_5));
        ugly[i] = next_ugly_no;
        if (next_ugly_no == next_multiple_of_2) {
            i2 = i2 + 1;
            next_multiple_of_2 = ugly[i2] * 2;
        }
        if (next_ugly_no == next_multiple_of_3) {
            i3 = i3 + 1;
            next_multiple_of_3 = ugly[i3] * 3;
        }
        if (next_ugly_no == next_multiple_of_5) {
            i5 = i5 + 1;
            next_multiple_of_5 = ugly[i5] * 5;
        }
    } 
   
    // End of for loop (i=1; i<n; i++)
    return next_ugly_no;
}
 
// Driver Code
int main()
{
    int n = 1500;
    cout << "The 1500'th ugly number is "<<getNthUglyNo(n)<<"."<<endl;
    return 0;
}
 
// This code is contributed by Sania Kumari Gupta (kriSania804)
