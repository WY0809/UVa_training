#include <iostream>
#include <string>
using namespace std;

int main()
{
    int m,n;
    int a=0;
    while(cin>>m>>n && m != 0 || n != 0){
        cin.get();
        
        if(a!=0){
            cout<<endl;
        }
        a++;
        
        string line[m];
        for(int i = 0 ; i < m ; i++){
            getline(cin,line[i]);
        }
        
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(line[i][j] != '*'){
                    line[i][j] = '0';
                }
            }
        }
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(line[i][j] == '*'){
                    for(int k = -1 ; k < 2 ; k++){
                        for(int q = -1 ; q < 2 ; q++){
                            if((k != 0 || q != 0) && i+k >= 0 && i+k < m && j+q >= 0 && j+q < n && line[i+k][j+q] != '*'){
                                line[i+k][j+q]++;
                            }
                        }
                    }
                    
                }
            }
        }
        
        cout<<"Field #"<<a<<":"<<endl;
        for(int i = 0 ; i < m ; i++){
            cout<<line[i]<<endl;
        }
    }
    return 0;
}
