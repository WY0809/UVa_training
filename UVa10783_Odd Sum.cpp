#include <iostream>

using namespace std;

int main()
{
    int Case;
    cin >> Case;
    for (int i =0 ; i < Case;i++){
        int up ,down,sum=0;
        cin >>down>>up;
        for(int j = down;j<up+1;j++ ){
            if(j%2==1){
                sum+=j;
            }
           
        }
        cout << "Case "<<i+1<<": "<<sum<<endl;
    }

    return 0;
}
