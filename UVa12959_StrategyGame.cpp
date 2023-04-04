#include iostream
using namespace std;
int main() {
    int J, R;
    do {
        cin  J  R;
        int person[J] = { 0 };
        int vp;
        for (int i = 0; i  J  R; i++) {
            cin  vp;
            person[i % J] += vp;
        }


        int max = 0;
        for (int i = 0; i  J; i++) {
            if (person[i] = person[max]) {
                max = i ;
            }
        }
        
        if (J != 0  R != 0) {
            cout  max+1  endl;
        }
    } while (J != 0  R != 0);

    return 0;
}



