#include <iostream>

using namespace std;

int main()
{
    long long int S,D;
    while(cin >> S >> D){
        for(long long int ans = S;  ans < D ; ans += S){
            S += 1;
        }
        cout << S << endl;
    }
    return 0;
}
