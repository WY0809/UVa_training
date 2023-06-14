#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    while(cin>>str && str !="0:00"){
        string H,M;
        bool min = false;
        for(int i = 0;i<str.length();i++){
            if(str[i] == ':'){
                min = true;
            }else if(min){
                M += str[i];
            }else{
                H += str[i];
            }
        }
        int hour = stoi(H),mins = stoi(M);
        //cout<<H<<" "<<M;
        //cout<<hour<<" "<<mins;
        
        double h_angle = hour%12*30 + mins*0.5 , m_angle = mins*6;
        //cout<<h_angle<<" "<<m_angle;
        
        if(h_angle > m_angle){
            if(h_angle - m_angle < 180)
                printf("%.3f\n",h_angle - m_angle);
            else
                printf("%.3f\n",360-(h_angle - m_angle));
        }else{
            if(m_angle - h_angle < 180)
                printf("%.3f\n",m_angle - h_angle);
            else
                printf("%.3f\n",360-(m_angle - h_angle));
        }
    }

    return 0;
}
