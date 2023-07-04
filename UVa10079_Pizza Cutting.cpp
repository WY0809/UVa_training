#include <iostream>

using namespace std;

int main()
{
    long long n;
    while(cin>>n && n>=0){
        long long pizza = 1;
        if(n != 0)
            pizza = pizza + (1 + n) * n / 2 ;
        
        cout<<pizza<<endl;
    }

    return 0;
}
