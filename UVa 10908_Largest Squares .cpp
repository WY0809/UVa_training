#include <iostream>
#include <string>
using namespace std;

int main()
{
	int kase;
	cin >> kase;

	while (kase--) {
		int M, N, Q;
		cin >> M >> N >> Q;
		cin.get();
		cout << M << " " << N << " " << Q << endl;

		string str[7];
		for (int i = 0; i < M; i++) {
			getline(cin, str[i]);
			//cout<<str[i]<<endl;
		}

		while (Q--) {
			int r, c;
			cin >> r >> c;

			int length = 1;
			bool noequal = false;
			while (1) {
				for (int i = length * -1; i <= length; i++) {
					for (int j = length * -1; j <= length; j++) {
						if (r + i < 0 || r + i >= M || c + j < 0 || c + j >= N || str[r + i][c + j] != str[r][c]) {
							noequal = true;
						}
					}
				}
				if (noequal) {
					break;
				}
				length += 2;
			}

			cout << length << endl;
		}
	}
	return 0;
}
