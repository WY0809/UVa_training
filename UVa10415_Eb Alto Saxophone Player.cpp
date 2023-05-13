#include <iostream>
#include <string>

using namespace std;

int main()
{
    int kase;
    cin >> kase;
    cin.get();
    while(kase--){
        string str;
        getline(cin,str);
        
        bool finger[11] = {false};
        bool finger_temp[11] = {false};
        int count[11] = {0};
        
        for(int i = 0 ; i < str.length() ; i++){
            //歸零下一次要按的指法
            for(int i=0;i<11;i++){
                finger_temp[i] = false;
            }
            //判斷是甚麼音符需要哪些指頭
            switch(str[i]){
                case 'c':
                    for(int j = 2 ; j <= 4 ; j++){
                        finger_temp[j] = true;
                    }
                    for(int j = 7 ; j <= 10 ; j++){
                        finger_temp[j] = true;
                    }
                    break;
                case 'd':
                    for(int j = 2 ; j <= 4 ; j++){
                        finger_temp[j] = true;
                    }
                    for(int j = 7 ; j <= 9 ; j++){
                        finger_temp[j] = true;
                    }
                    break;
                case 'e':
                    for(int j = 2 ; j <= 4 ; j++){
                        finger_temp[j] = true;
                    }
                    for(int j = 7 ; j <= 8 ; j++){
                        finger_temp[j] = true;
                    }
                    break;
                case 'f':
                    for(int j = 2 ; j <= 4 ; j++){
                        finger_temp[j] = true;
                    }
                    
                    finger_temp[7] = true;
                    break;
                case 'g':
                    for(int j = 2 ; j <= 4 ; j++){
                        finger_temp[j] = true;
                    }
                    break;
                case 'a':
                    for(int j = 2 ; j <= 3 ; j++){
                        finger_temp[j] = true;
                    }
                    break;
                case 'b':
                    finger_temp[2] = true;
                    break;    
                case 'C':
                    finger_temp[3] = true;
                    break;
                case 'D':
                    for(int j = 1 ; j <= 4 ; j++){
                        finger_temp[j] = true;
                    }
                    for(int j = 7 ; j <= 9 ; j++){
                        finger_temp[j] = true;
                    }
                    break;
                case 'E':
                    for(int j = 1 ; j <= 4 ; j++){
                        finger_temp[j] = true;
                    }
                    for(int j = 7 ; j <= 8 ; j++){
                        finger_temp[j] = true;
                    }
                    break;
                case 'F':
                    for(int j = 1 ; j <= 4 ; j++){
                        finger_temp[j] = true;
                    }
                    
                    finger_temp[7] = true;
                    break;
                case 'G':
                    for(int j = 1 ; j <= 4 ; j++){
                        finger_temp[j] = true;
                    }
                    break;
                case 'A':
                   for(int j = 1 ; j <= 3 ; j++){
                        finger_temp[j] = true;
                    }
                    break;
                case 'B':
                    for(int j = 1 ; j <= 2 ; j++){
                        finger_temp[j] = true;
                    }
                    break;
            }
            //如果原本沒按後來要按，那根手指按壓次數加一
            for(int i=1;i<11;i++){
                if(finger[i] == false && finger_temp[i] == true){
                    count[i]++;
                }
                finger[i] = finger_temp[i];
            }
        }
        //output
        for(int i=1;i<11;i++){
            cout<<count[i];
            if(i != 10){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
