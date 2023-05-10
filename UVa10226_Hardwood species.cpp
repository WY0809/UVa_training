#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    int kase;
    cin>>kase;
    cin.get();
    cin.get();
    int n = 1;
    while(kase--){
        
        if(n != 1){
            cout<<endl;
        }
        n++;
        
        string tree;
        map<string,double> trees;
        double count = 0;
        while(getline(cin,tree) && tree !=""){
            count++;
            trees[tree]++;    
        }
        
        for (const auto &n : trees) {
            cout<< n.first<<" "; 
            printf("%.4f\n",n.second/count*100);
        }
    }
    return 0;
}
