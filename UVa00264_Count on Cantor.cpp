#include <iostream>

using namespace std;

int main()
{

    int n;
    while (cin >> n)
    {
        int i = 1, sum = 0;
        while (1){
            sum += i;
            if (sum >= n)
                break;
            i++;
        }

        int l = i, r = 1;
        sum -= n;
        if (i % 2 == 0){
            cout << "TERM " << n << " IS " << l - sum << "/" << r + sum << endl;
        }
        else{
            cout << "TERM " << n << " IS " << r + sum << "/" << l - sum << endl;
        }
    }
    return 0;
}
