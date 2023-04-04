#include<iostream>
using namespace std;
int main(){
    int Case,j=0;
    cin >> Case;
    int sum[Case] ={0};
    
    while(Case--){
        int relatives;
        cin >> relatives;
        int  distance[relatives] = {0};
        for(int i = 0; i<relatives ; i++){
            cin >> distance[i];
        }
        //bubble
        int temp;
        for (int i = 0; i < relatives; i++) {
            for (int k = i + 1; k < relatives; k++) {
                if (distance[k] < distance[i]) {
                    temp = distance[k];
                    distance[k] = distance[i];
                    distance[i] = temp;
                }
            }
        }
        int avg = 0;
        avg = distance[relatives/2];
        //calculate min distance
        for(int i = 0; i<relatives ; i++){
            if(avg > distance[i]){
                sum[j] += avg - distance[i];
            }else{
                sum[j] += distance[i] - avg;
            }
        }
        j++;
    }
    //print all of case min distance
    for(int i = 0; i<j ; i++){
        cout << sum[i] <<endl;
    }
    return 0;
}

