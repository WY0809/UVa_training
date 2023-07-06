#include <bits/stdc++.h>

using namespace std;

#define M 10005

int n, m, t, k, grid[65][65];

struct turtles
{
	int x, y;
} turtle[M];

bool check(int x, int y)
{
	return !(x >= n || x < 0 || y >= m || y < 0 || grid[x][y]);
}

void solve()
{
	char str[100];
	while (k--)
	{
		int id;
		scanf("%d%s", &id, str);
		if (!strcmp(str, "W"))
		{
			int x = turtle[id].x - 1, y = turtle[id].y;
			if (check(x, y))
			{
				grid[turtle[id].x][turtle[id].y] = 0;
				grid[x][y] = 1;
				turtle[id].x = x;
				turtle[id].y = y;
			}
		}
		else if (!strcmp(str, "E"))
		{
			int x = turtle[id].x + 1, y = turtle[id].y;
			if (check(x, y))
			{
				grid[turtle[id].x][turtle[id].y] = 0;
				grid[x][y] = 1;
				turtle[id].x = x;
				turtle[id].y = y;
			}
		}
		else if (!strcmp(str, "N"))
		{
			int x = turtle[id].x, y = turtle[id].y - 1;
			if (check(x, y))
			{
				grid[turtle[id].x][turtle[id].y] = 0;
				grid[x][y] = 1;
				turtle[id].x = x;
				turtle[id].y = y;
			}
		}
		else if (!strcmp(str, "S"))
		{
			int x = turtle[id].x, y = turtle[id].y + 1;
			if (check(x, y))
			{
				grid[turtle[id].x][turtle[id].y] = 0;
				grid[x][y] = 1;
				turtle[id].x = x;
				turtle[id].y = y;
			}
		}
		else if (!strcmp(str, "NE"))
		{
			int x = turtle[id].x + 1, y = turtle[id].y - 1;
			if (check(x, y))
			{
				grid[turtle[id].x][turtle[id].y] = 0;
				grid[x][y] = 1;
				turtle[id].x = x;
				turtle[id].y = y;
			}
		}
		else if (!strcmp(str, "NW"))
		{
			int x = turtle[id].x - 1, y = turtle[id].y - 1;
			if (check(x, y))
			{
				grid[turtle[id].x][turtle[id].y] = 0;
				grid[x][y] = 1;
				turtle[id].x = x;
				turtle[id].y = y;
			}
		}
		else if (!strcmp(str, "SE"))
		{
			int x = turtle[id].x + 1, y = turtle[id].y + 1;
			if (check(x, y))
			{
				grid[turtle[id].x][turtle[id].y] = 0;
				grid[x][y] = 1;
				turtle[id].x = x;
				turtle[id].y = y;
			}
		}
		else if (!strcmp(str, "SW"))
		{
			int x = turtle[id].x - 1, y = turtle[id].y + 1;
			if (check(x, y))
			{
				grid[turtle[id].x][turtle[id].y] = 0;
				grid[x][y] = 1;
				turtle[id].x = x;
				turtle[id].y = y;
			}
		}
	}
	for (int i = 0; i < m; i++)
	{
		int to = -1;
		for (int j = n - 1; j >= 0; j--)
		{
			if (grid[j][i])
			{
				to = j;
				break;
			}
		}
		for (int j = 0; j <= to; j++)
		{
			printf((grid[j][i]) ? "*" : " ");
		}
		cout<<endl;
	}
}

int main()
{
	while (cin>>m>>n>>t>>k)
	{
		memset(grid, 0, sizeof(grid));
		for (int i = 0; i < t; i++)
		{
			int id;
			cin>>id;
			cin>>turtle[id].y>>turtle[id].x;
			grid[turtle[id].x][turtle[id].y] = 1;
		}
		solve();
		cout<<endl;
	}
	return 0;
}
