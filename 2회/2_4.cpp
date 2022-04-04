#include <iostream>
#include <queue>
using namespace std;

int w = 8;
int h = 4;
int board[10][10] = {
			{4 ,1 ,0 ,0 ,0 ,0 ,1 ,0},
			{0 ,0 ,0 ,1 ,0 ,1 ,0 ,0},
			{0 ,2 ,1 ,1 ,3 ,0 ,4 ,0},
			{0 ,0 ,0 ,0 ,0 ,1 ,1 ,0}
};
int dis[2][1000][1000];
int dy[4] = { 1,0,-1,0 };
int dx[4] = { 0,1,0,-1 };
queue <pair<int, int>> Q;

void BFS(int idx)
{
	while (!Q.empty())
	{
		int y = Q.front().first;
		int x = Q.front().second;
		Q.pop();

		for (int i = 0; i < 4; i++)
		{
			int ny = y + dy[i];
			int nx = x + dx[i];

			if (dis[idx][ny][nx] == 0 && nx>=0 && ny>=0 && nx<w && ny<h)
			{
				if (board[ny][nx]!=1) {
					dis[idx][ny][nx] = dis[idx][y][x]+1;
					Q.push(make_pair(ny, nx));
				}
			}
			cout << dis[idx][ny][nx];
		}
		cout << endl;
	}
}
int main()
{
	//공주에서 나무까지 2->3
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			if (board[i][j] == 2)
			{
				Q.push(make_pair(i, j));
				dis[0][i][j] = 1;
				BFS(0);
				break;
			}
		}
	}
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			cout << dis[0][i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
