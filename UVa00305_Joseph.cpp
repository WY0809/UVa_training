#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
 
using namespace std;
 
int ans[15];
 
int can( int k, int m )
{
	int now = 0;
	for ( int i = 0 ; i < k ; ++ i ) {
		now = (now+m-1)%(k*2-i);
		if ( now < k ) 
			return 0;
	}
	return 1;
}
 
int main()
{
	for ( int i = 1 ; i < 15 ; ++ i ) {
		for ( int j = i ; ; ++ j )
			if ( can( i, j ) ) {
				ans[i] = j;
				break;
			}
	}
	
	int n;
	while ( cin >> n && n )
		cout << ans[n] << endl;
	return 0;
}
