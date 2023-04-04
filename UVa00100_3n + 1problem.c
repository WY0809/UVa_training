#include iostream
using namespace std;

int swap(int i , int j){
    
    int temp;
    temp = i;
    i = j;
    j = temp;
    return 0;
}

int problem(int n){
    int sum = 1;
    while(n != 1){
        if(n%2 == 0){
            n = 2;
            sum += 1;
        }else{
            n= 3n+1;
            sum += 1;
        }
    }
    return sum;
}

int main()
{
    int i,j;
    while(cin  i j){
        
        cout  i   j   ;
        if(i  j ){
            swap(i,j);
        }
        
        
        int max_cyclelength = 1;
        
        for(int k =i; k=j;k++){
            if (problem(k)  max_cyclelength){
                max_cyclelength = problem (k);
            }
        }
        cout  max_cyclelength endl;
        
    }
    return 0;
}

