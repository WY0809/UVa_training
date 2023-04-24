#include <iostream>

using namespace std;

int main()
{
    int num;
    int months[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    cin >> num;
    while(num -- ){
        int month,day;
        cin >> month >> day;
        
        int days = day;
        for(int i = 0;i < month-1;i++)
            days += months[i];
          
        if(days%7 == 1){
            cout<<"Saturday"<<endl;
        }else if(days%7 == 2){
            cout<<"Sunday"<<endl;
        }else if(days%7 == 3){
            cout<<"Monday"<<endl;
        }else if(days%7 == 4){
            cout<<"Tuesday"<<endl;
        }else if(days%7 == 5){
            cout<<"Wednesday"<<endl;
        }else if(days%7 == 6){
            cout<<"Thursday"<<endl;
        }else if(days%7 == 0){
            cout<<"Friday"<<endl;
        }
    }
    return 0;
}
