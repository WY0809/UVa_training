#include <iostream>
using namespace std;

int main()
{
    int a,b;
    while(cin>>a>>b && a>0 && b>=a){
        int ans = 0;
        for(int i=1;i*i<=b;i++){
            if(i*i >= a){
                ans++;
            }
        }
        
        cout<<ans<<endl;
    }
    return 0;
}
