#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    int kase;
    cin>>kase;
    while(kase--){
        int n,length;
        cin >> n >> length;
        
        string DNA[n];
        for(int i = 0 ; i < n ; i++){
            cin>>DNA[i];
        }
        
        int count = 0;
        for(int i = 0 ; i < length ; i++){
            map<char,int> gene ={
                {'T',0},
                {'G',0},
                {'C',0},
                {'A',0},
            };
            for(int j = 0 ; j < n ; j++){
                gene[DNA[j][i]]++;
            }
            //cout<<gene['A']<<gene['C']<<gene['G']<<gene['T']<<endl;
            
            map<char, int>::iterator iter;
            map<char, int>::iterator maxIter = gene.begin();
            
            for (iter = gene.begin(); iter != gene.end(); iter++)
            {
                if (iter->second > maxIter->second)
                {
                    maxIter = iter;
                }
            }
            cout<<maxIter->first;
            count += n - maxIter->second;
        }
        cout<<endl<<count<<endl;
    }
    return 0;
}
