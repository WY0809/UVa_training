//使用zerojudge上別人的想法，C=A+B，A的每一位與B的每一位相加，若大於C的每一位則代表進位，如125+967=1092，5+7=12>2，2+6=8<9，1+9=10>0，3carry bits
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
