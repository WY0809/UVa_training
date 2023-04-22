//while 那段寫成註解那樣UVa就無法通過會出現runtime error，有人知道原因的話可以跟我說嗎

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a,str[100];
    int num =0,max = 0;
    
    while(getline(cin,a)){
        str[num]=a;
        if(str[num].length() > max)
            max = str[num].length();
        num++;
    }
  
//     while(getline(cin,str[num])){
//         if(str[num].length() > max)
//             max = str[num].length();
//         num++;
//     }
    
    for(int i = 0; i < max;i++){
        
        for(int j = num-1 ; j > -1;j--){
            if(str[j].length() <= i){
                cout<<" ";
            }else{
                cout<<str[j][i];
            }
        }
        cout<<endl;
    }
    
    return 0;
}
