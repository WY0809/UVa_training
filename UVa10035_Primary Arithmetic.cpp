#include <iostream>

using namespace std;

int main()
{
    int a,b;
    while(cin>>a>>b && (a!=0 || b!=0)){
        int c=a+b;
        
        int carry=0;
        while(a!=0||b!=0){
            if(a%10+b%10>c%10){
                carry++;
            }
            a/=10;
            b/=10;
            c/=10;
        }
        
        if(carry == 0){
            cout<<"No carry operation."<<endl;
        }else if(carry == 1){
            cout<<"1 carry operation."<<endl;
        }else{
            cout<<carry<<" carry operations."<<endl;
        }
    }
    return 0;
}
