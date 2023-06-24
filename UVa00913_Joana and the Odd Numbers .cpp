#include <iostream>
using namespace std;

int main()
{
    long long N;
    while(cin >> N){
        long long M = (N + 1) * (N + 1)/2;
        cout<< 3*M-9<<endl;
    }
    return 0;
}
