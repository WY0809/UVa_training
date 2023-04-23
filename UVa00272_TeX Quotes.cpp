#include <iostream>
#include <string>
using namespace std;
bool toggle(bool *a)
{
    if (*a == true){
        *a = false;
    }
    else{
        *a = true;
    }
    return a;
}
int main()
{
    string str;
    bool first = true;
    while (getline(cin, str))
    {
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '"'){
                if (first){
                    cout << "``";
                    toggle(&first);
                }
                else{
                    cout << "''";
                    toggle(&first);
                }
            }
            else{
                cout << str[i];
            }
        }
        cout << endl;
    }
    return 0;
}
