#include <iostream>
using namespace std;

int dy[4] = { 0, 1, 0, -1 };
int dx[4] = { 1, 0, -1, 0 };
int board[10][10] = {
		{0,0,0,0,0,0},
		{0,0,1,0,1,0},
		{0,1,1,1,0,0},
		{0,0,0,0,0,0},
		{0,0,0,1,1,0},
		{0,0,0,0,0,0}
};
int DFS(int i, int j, int cnt) {
	for (int x = 0; x < 4; x++)
	{
		i = i + dy[i];
		j = j + dx[i];
		if (board[i][j] == 1)
		{
			cnt++;
			DFS(i,j,cnt);
		}
	}
	cout << cnt << endl;
	return 0;
}
int main()
{

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++) {
			cout << board[i][j] << " ";
		}
		cout << endl;
	}
	int res = 0;
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++) {
			int cnt = 0;
			if (board[i][j] == 1)
			{
				board[i][j] = 0;
				cnt++;
				DFS(i,j,cnt);
			}
		}
	}

	return 0;
}