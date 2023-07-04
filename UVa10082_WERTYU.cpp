#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    map<char,char> transform{
        { ' ',' '},
        { '=','-'},
        { '-','0'},
		{ '0','9'},
		{ '9','8'},
		{ '8','7'},
		{ '7','6'},
		{ '6','5'},
		{ '5','4'},
		{ '4','3'},
		{ '3','2'},
		{ '2','1'},
		{ '1','`'},
		
		{ '\\',']'},
		{ ']','['},
		{ '[','P'},
		{ 'P','O'},
		{ 'O','I'},
		{ 'I','U'},
		{ 'U','Y'},
		{ 'Y','T'},
		{ 'T','R'},
		{ 'R','E'},
		{ 'E','W'},
		{ 'W','Q'},
				
		{ '\'',';'},
		{ ';','L'},
		{ 'L','K'},
		{ 'K','J'},
		{ 'J','H'},
		{ 'H','G'},
		{ 'G','F'},
		{ 'F','D'},
		{ 'D','S'},
		{ 'S','A'},
		
		{ '/','.'},
		{ '.',','},
		{ ',','M'},
		{ 'M','N'},
		{ 'N','B'},
		{ 'B','V'},
		{ 'V','C'},
		{ 'C','X'},
		{ 'X','Z'}
    };
    
    string a;
    while(getline(cin,a)){
        for(int i = 0;i < a.size();i++){
          cout<<transform[a[i]];
        }
        cout <<endl;
    }
    return 0;
}
