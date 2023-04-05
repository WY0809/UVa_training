//I got presentation error on this question at UVA online judge
//if someone know why,plz tell me,thanks

#include <iostream>
#include <string>
using namespace std;

int main()
{
    long long int num;
    int i = 1;
    int units[4] = {10000000,100000,1000,100};
    string unit[4] = {"kuti","lakh","hajar","shata"};
    while(cin >> num && num >= 0){
        
        string Num = to_string(num);
        if(num == 0 ){
            
            printf( "%4d. ", i);
            cout<<num<<endl;
            
        }else if((Num.size()-1)/7 == 0){
            
           printf( "%4d. ", i);
            for(int j =0;j<4;j++){
               if(num / units[j]!=0){
                   cout <<num / units[j] <<" "<<unit[j]<<" ";
                   num %= units[j];
               }
            }
            
            if(num == 0){
                cout << endl;
            }else{
                cout<<num<<endl;
            }
            
        }else {
            
           printf( "%4d. ", i);
            int temp = num /units[0];
            num %= units[0];
            for(int j =0;j<4;j++){
               if(temp / units[j]!=0){
                   cout <<temp / units[j] <<" "<<unit[j]<<" ";
                   temp %= units[j];
               }
            }
            
            if(temp == 0){
                cout<<unit[0]<<" ";
            }else{
                cout<<temp<<" "<<unit[0]<<" ";
            }
            
            for(int j =0;j<4;j++){
               if(num / units[j]!=0){
                   cout <<num / units[j] <<" "<<unit[j]<<" ";
                   num %= units[j];
               }
            }
            
             if(num == 0){
                cout << endl;
            }else{
                cout<<num<<endl;
            }
            
        }
        i++;
    }
    return 0;
}
