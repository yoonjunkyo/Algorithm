#include <iostream>
#include <queue>
using namespace std;

int board[10][10] = {
    {1, 0, 0, 0, 0},
    {0 ,0 ,0 ,1 ,0},
    {0 ,1 ,2 ,1 ,0},
    {0 ,0 ,1 ,2 ,0},
    {0 ,0 ,0 ,0 ,0}
};
int dis[10][10] = { 0 };
int w = 5;
queue<pair<int,int>> Q;
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

int main()
{
    int p = 1;
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < w; j++)
        {
            if (board[i][j] == 2)
            { 
                Q.push(make_pair(i, j));
                dis[i][j] = p;
            }
        }
    }

    while (!Q.empty())
    {
        int y=Q.front().first;
        int x=Q.front().second;
        Q.pop();
        for (int i = 0; i < 4; i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];
            p = dis[y][x] + 1;
            if ((dis[ny][nx] == 0) &&(board[ny][nx] == 0) && ny >= 0 && ny < w && nx >= 0 && nx < w)
            {
                dis[ny][nx] = p;
                Q.push(make_pair(ny, nx));
            }
        }
    }
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < w; j++)
        {
            cout << dis[i][j] << " ";
        }cout << endl;
    }

	return 0;
}
