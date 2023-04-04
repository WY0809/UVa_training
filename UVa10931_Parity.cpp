#include <iostream>
using namespace std;
int main(){
  int input;
  int sum = 0;
  int output[32] = {0};
  int outputcount = 0;
  while(1){
     
      cin >> input;
      if(input >= 1 && input <= 2147483647){
          for(int i = 0; i < 32 ; i++){
            if(input % 2 == 1){
                output[i] = 1;
                sum += 1;
                outputcount = i;
                input /= 2;
            }else{
                output[i] = 0;
                input /= 2;
            }
          }
      }else{
          break;
      }
      cout <<"The parity of ";
      for(int i = outputcount; i >= 0 ; i--){
          cout << output[i] ;
      }
      cout << " is "<< sum << " (mod 2)." <<endl;
      sum = 0;
  }
  return 0;
}


