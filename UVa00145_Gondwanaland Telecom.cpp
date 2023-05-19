#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double charge[5][3] = {{0.1,0.06,0.02},{0.25,0.15,0.05},{0.53,0.33,0.13},{0.87,0.47,0.17},{1.44,0.80,0.30}};

int reg(int hour){
    int ans;
    if(hour < 8){
        ans = 2;
    }else if(hour < 18){
        ans = 0;
    }else if(hour < 22){
        ans = 1;    
    }else{
        ans = 2;
    }
    return ans;
}

int main()
{
    char mode;
    string phone;
    int hour1,hour2,min1,min2;
    
    while(cin >> mode && mode != '#'){
        cin>>phone>>hour1>>min1>>hour2>>min2;
        
        int hour1_reg = reg(hour1),hour2_reg = reg(hour2);
        // cout<<hour1 <<" " <<hour1_reg<<" "<<hour2<<" "<<hour2_reg<<endl;
        
        int min[3]={0};
        int temp = 0;
        if(hour1 == hour2 && min1 == min2){
            min[0] = 600;
            min[1] = 240;
            min[2] = 600;
        }else if(hour1_reg == 0 && hour2_reg == 0){
            if(hour1 > hour2){
                min[1] = 240;
                min[2] = 600;
                temp += 60 - min2 + min1;
                hour2 ++;
                temp += 60*(hour1-hour2);
                min[0] = 1440 - min[1] -min[2]-temp;
            }else if(hour1 < hour2){
                temp += 60 - min1 + min2;
                hour1 ++;
                temp += 60*(hour2-hour1);
                min[0] = temp;
            }else if(min2 > min1){
                temp += 60 - min1 + min2;
                hour1 ++;
                temp += 60*(hour2-hour1);
                min[0] = temp;
            }else{
                min[1] = 240;
                min[2] = 600;
                temp += 60 - min2 + min1;
                hour2 ++;
                temp += 60*(hour1-hour2);
                min[0] = 1440 - min[1] -min[2]-temp;
            }
        }else if(hour1_reg == 0 && hour2_reg == 1){
            min[0] += 60 - min1;
            hour1++;
            min[0] += 60*(18-hour1);
            
            min[1] += 60*(hour2-18) + min2;
        }else if(hour1_reg == 0 && hour2_reg == 2){
            if (hour2 <= 24 && hour2 >= 22){
                min[0] += 60 - min1;
                hour1++;
                min[0] += 60*(18-hour1);
                
                min[1] = 240;
                min[2] += 60*(hour2-22) + min2;
            }else{
                min[0] += 60 - min1;
                hour1++;
                min[0] += 60*(18-hour1);
                
                min[1] = 240;
                min[2] += 60*(hour2+2) + min2;
            }
        }else if(hour1_reg == 1 && hour2_reg == 0){
            min[0] += 60 - min2;
            hour2++;
            min[0] += 60*(18-hour2);
            min[0] = 600 - min[0];
            min[1] += 60*(hour1-18) + min1;
            min[1] = 240 -min[1];
            min[2] = 600;
        }else if(hour1_reg == 1 && hour2_reg == 1){
            if(hour1 > hour2){
                min[0] = 600;
                min[2] = 600;
                temp += 60 - min2 + min1;
                hour2 ++;
                temp += 60*(hour1-hour2);
                min[1] = 1440 - min[0] -min[2]-temp;
            }else if(hour1 < hour2){
                temp += 60 - min1 + min2;
                hour1 ++;
                temp += 60*(hour2-hour1);
                min[1] = temp;
            }else if(min2 > min1){
                temp += 60 - min1 + min2;
                hour1 ++;
                temp += 60*(hour2-hour1);
                min[1] = temp;
            }else{
                min[0] = 600;
                min[2] = 600;
                temp += 60 - min2 + min1;
                hour2 ++;
                temp += 60*(hour1-hour2);
                min[1] = 1440 - min[0] -min[2]-temp;
            }
        }else if(hour1_reg == 1 && hour2_reg == 2){
            if (hour2 <= 24 && hour2 >= 22){
                min[1] += 60 - min1;
                hour1++;
                min[1] += 60*(22-hour1);
                
                min[2] += 60*(hour2-22) + min2;
            }else{
                min[1] += 60 - min1;
                hour1++;
                min[1] += 60*(22-hour1);
                
                min[2] += 60*(hour2+2) + min2;
            }
        }else if(hour1_reg == 2 && hour2_reg == 0){
            if (hour1 <= 24 && hour1 >= 22){
                min[2] += 60 - min1;
                hour1++;
                min[2] += 60*(32 - hour1);
                
                min[0] = 60*(hour2 - 8) + min2;
            }else{
                min[2] += 60 - min1;
                hour1++;
                min[2] += 60*(8 - hour1);
                
                min[0] = 60*(hour2 - 8) + min2;
            }
        }else if(hour1_reg == 2 && hour2_reg == 1){
            if (hour1 <= 24 && hour1 >= 22){
                min[2] += 60 - min1;
                hour1++;
                min[2] += 60*(32 - hour1);
                min[0] = 600;
                min[1] = 60*(hour2 - 18) + min2;
            }else{
                min[2] += 60 - min1;
                hour1++;
                min[2] += 60*(8 - hour1);
                min[0] = 600;
                min[1] = 60*(hour2 - 18) + min2;
            }
        }else if(hour1_reg == 2 && hour2_reg == 2){
            if(hour1<8){
                hour1 +=24;
            }
            if(hour2<8){
                hour2 +=24;
            }
            if(hour1 > hour2){
                min[0] = 600;
                min[1] = 240;
                temp += 60 - min2 + min1;
                hour2 ++;
                temp += 60*(hour1-hour2);
                min[2] = 1440 - min[0] -min[1]-temp;
            }else if(hour1 < hour2){
                temp += 60 - min1 + min2;
                hour1 ++;
                temp += 60*(hour2-hour1);
                min[2] = temp;
            }else if(min2 > min1){
                temp += 60 - min1 + min2;
                hour1 ++;
                temp += 60*(hour2-hour1);
                min[2] = temp;
            }else{
                min[0] = 600;
                min[1] = 240;
                temp += 60 - min2 + min1;
                hour2 ++;
                temp += 60*(hour1-hour2);
                min[2] = 1440 - min[0] -min[1]-temp;
            }
        }
        double ans = 0;
        for(int i =0;i < 3;i++){
            ans += min[i] * charge[mode - 'A'][i]; 
        }
       
        cout << setw(10) << phone <<setw(6)<<min[0]<<setw(6)<<min[1]<<setw(6)<<min[2]<<setw(3)<<mode<<setw(8);
        printf("%8.2f\n",ans);
    }
    return 0;
}
