#include iostream
using namespace std;

long int num_step(int start_x,int start_y,int end_x,int end_y){
    long int Step=0;
    int start_total = start_x+start_y;
    int end_total = end_x+end_y;
    if(start_total == end_total){
        while(start_x != end_x  start_y != end_y){
        
            start_x += 1;
            start_y -= 1;
            Step += 1;
        
        }
    }else{
        while(start_x != 0){
            if(start_y == 0){
                start_y = start_x + 1;
                start_x = 0;
                Step += 1;
            }else{
                start_x += 1;
                start_y -= 1;
                Step += 1;
            }
        }
    
        int temp_y = end_x + end_y; 
        Step += temp_y - end_y;
        for (int i = start_y; i  temp_y;i++){
            Step += i+1;
        }
    }
    return Step;
}

int main()
{
    int Case;
    cin  Case;
    long int step[Case];
    
    for(int i = 0 ; i Case; i++){
        int start_x,start_y,end_x,end_y;
        cin start_x start_yend_xend_y;
        step[i] = num_step(start_x,start_y,end_x,end_y);
    }
    
    for(int i = 0 ; i Case; i++){
        cout  Case i+1  step[i] endl;
    }
    
    return 0;
}

