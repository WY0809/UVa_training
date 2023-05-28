#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool judge(char a,char b){
    
    if(a =='A' && b =='A'){
        return false;
    }else if(a =='H' && b =='H'){
        return false;
    }else if(a =='I' && b =='I'){
        return false;
    }else if(a =='M' && b =='M'){
        return false;
    }else if(a =='O' && b =='O'){
        return false;
    }else if(a =='T' && b =='T'){
        return false;
    }else if(a =='U' && b =='U'){
        return false;
    }else if(a =='V' && b =='V'){
        return false;
    }else if(a =='W' && b =='W'){
        return false;
    }else if(a =='X' && b =='X'){
        return false;
    }else if(a =='Y' && b =='Y'){
        return false;
    }else if(a =='1' && b =='1'){
        return false;
    }else if(a =='8' && b =='8'){
        return false;
    }else if(a =='E' && b =='3' || b =='E' && a =='3'){
        return false;
    }else if(a =='L' && b =='J' || b =='L' && a =='J'){
        return false;
    }else if(a =='S' && b =='2' || b =='S' && a =='2'){
        return false;
    }else if(a =='Z' && b =='5' || b =='Z' && a =='5'){
        return false;
    }
    return true;
}

int main()
{
    string s1;
    while(getline(cin,s1)){
        string s2 = s1;
        reverse(s2.begin(), s2.end());
        
        bool palindrome = true;
        for(int i = 0 ; i < s1.length() ; i++){
            if(s1[i] != s2[i]){
                palindrome = false;
            }
        }
        
        bool mirror = true;
        for(int i = 0 ; i <= s1.length()/2 ; i++){
            if(judge(s1[i],s1[s1.length()-1-i])){
                mirror = false;
            }
        }
        
        if(palindrome && mirror){
            cout<<s1<<" -- is a mirrored palindrome."<<endl;
        }else if(mirror){
            cout<<s1<<" -- is a mirrored string."<<endl;
        }else if(palindrome){
            cout<<s1<<" -- is a regular palindrome."<<endl;
        }else{
            cout<<s1<<" -- is not a palindrome."<<endl;
        }
        cout<<endl;
    }
    return 0;
}
