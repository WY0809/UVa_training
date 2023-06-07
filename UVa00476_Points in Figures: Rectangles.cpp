#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<double> x1,x2,y1,y2;
    char type;
    while(cin>>type && type == 'r'){
        double temp[4];
        cin>>temp[0]>>temp[1]>>temp[2]>>temp[3];
        x1.push_back(temp[0]);
        y1.push_back(temp[1]);
        x2.push_back(temp[2]);
        y2.push_back(temp[3]);
    }
    
    double x,y;
    int kase = 1;
    while(cin >> x >> y && (x != 9999.9 || y != 9999.9)){
        bool contain = false;
        for(int i = 0 ; i < x1.size() ; i++){
            if(x > x1[i] && x < x2[i] && y < y1[i] && y > y2[i]){
                contain = true;
                cout<<"Point "<<kase<<" is contained in figure "<<i+1<<endl;
            }
        }
        
        if(!contain){
            cout<<"Point "<<kase<<" is not contained in any figure"<<endl;
            //Point i is not contained in any figure
        }
        
        kase++;
    }
    return 0;
}
