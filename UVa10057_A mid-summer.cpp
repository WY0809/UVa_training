#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int n;
    while(cin >> n){
        int num[n];
        for(int i = 0;i<n;i++){
            cin >> num[i];
        }
        
        //本題不能使用bubble sort會TLE
        sort(num,num+n);
        
        int mid1,mid2,sum = 1;
        if(n % 2 == 0){
            mid1 = num[n/2-1];
            mid2 = num[n/2];
            sum = num[n/2] - num[n/2 - 1] + 1;
        }else{
            mid1 = num[n/2];
            mid2 = num[n/2];
        }
        
        int count = 0;
        for(int i = 0 ; i < n ; i++){
            if(num[i] == mid1 || num[i] == mid2){
                count++;
            }
        }
        
        cout<<mid1<<" "<<count<<" "<<sum<<endl;
    }

    return 0;
}
