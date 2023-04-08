#include <iostream>

using namespace std;
int bubblesort(int b[],int n){
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(b[i]>b[j]){
                int temp;
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    return 0;
}


int main()
{
    int n;
    while(cin >> n){
        int a[n];
        for(int i = 0;i < n;i++){
            cin>>a[i];
        }
        
        int b[n-1];
        for(int i = 0;i < n-1;i++){
            if(a[i] > a[i+1]){
                b[i] = a[i] - a[i+1];
            }else{
                b[i] = a[i+1] - a[i];
            }
        }
        
        bubblesort(b,n-1);
        
        bool jolly=true;
        for(int i = 0;i < n-1;i++){
            if(b[i]!=i+1){
                jolly = false;
            }
        }
        
        if(jolly){
            cout<<"Jolly"<<endl;
        }else{
            cout<<"Not jolly"<<endl;
        }
        
    }
    return 0;
}
