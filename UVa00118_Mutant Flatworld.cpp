#include <iostream>
#include <string>
#include <vector>
using namespace std;

char directions[] = {'N', 'E', 'S', 'W'};
int x_change[] = {0 , 1 , 0 , -1};
int y_change[] = {1 , 0 , -1 , 0};

int main()
{
    //輸入邊界
    int x_edge,y_edge;
    cin>>x_edge>>y_edge;
    //一些對於整題一致的變數
    int x_pos,y_pos;
    char direction;
    vector<int> x_lost,y_lost;
    while(cin>>x_pos>>y_pos>>direction){
        //接收指令
        cin.get();
        string str;
        getline(cin,str);
        //判斷目前方位
        int index;
        for(index = 0;index <= 3; index++){
            if(direction == directions[index]){
                break;
            }
        }
        //宣告是否遺失
        bool lost = false;
        //依據指令做不同的事
        for(int i = 0;i<str.length();i++){
            if(str[i] == 'R'){
                index++;
                index %= 4;
            }else if(str[i] == 'L'){
                if(index == 0){
                    index = 3;
                }else{
                    index--;
                }
            }else if(str[i] == 'F'){
                //判斷現在的點有沒有標記
                bool scent = true;
                for(int j = 0;j<x_lost.size();j++){
                    if(x_pos == x_lost[j] && y_pos == y_lost[j] ){
                        scent =false;
                    }
                }
                //判斷有沒有超出邊界
                if(x_pos + x_change[index] > x_edge || y_pos + y_change[index] > y_edge || x_pos + x_change[index] < 0 || y_pos + y_change[index] < 0){
                    //超出邊界但已有標記，不執行任何動作
                    if(scent){
                        lost = true;
                        x_lost.push_back(x_pos);
                        y_lost.push_back(y_pos);
                        break;
                    }
                }else{
                    x_pos += x_change[index];
                    y_pos += y_change[index];
                }
            }
        }
        //輸出
        if(!lost){
            cout << x_pos<<" "<<y_pos  <<" "<<directions[index]<<endl;
        }else{
            cout << x_pos<<" "<<y_pos  <<" "<<directions[index]<<" LOST"<<endl;
        }
    }
    return 0;
}
