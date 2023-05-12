#include <iostream>
#include <string>
using namespace std;

int turn(string a,int *top,int *north,int* west){
    int temp;
    if(a == "north"){
        temp = 7 - *north;
        *north = *top;
        *top = temp;
    }else if(a == "east"){
        temp = 7-*top;
        *top = *west;
        *west = temp;
    }else if(a == "south"){
        temp = 7-*top;
        *top = *north;
        *north = temp;
    }else if(a == "west"){
        temp = 7 - *west;
        *west = *top;
        *top = temp;
    }
    return 0;
}


int main()
{
    int n;
    while(cin>>n && n != 0){
        cin.get();
        string ins[n];
        int top = 1,north = 2,west = 3;
        
        for(int i = 0 ; i < n ; i++){
            getline(cin,ins[i]);
            turn(ins[i],&top,&north,&west);
            // cout<<top<<" "<<north<<" "<<west<<endl;
        }
        
        cout<<top<<endl;
    }
    return 0;
}
