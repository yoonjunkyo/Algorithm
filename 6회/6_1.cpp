#include <iostream>
#include <queue>
using namespace std;

int main()
{
	char a[10][10] = { {'.','#','.','.','.','.','#'},
				   	{'.','.','#','.','.','.','#'},
					{'.','.','#','.','.','#','.'},
					{'.','.','.','#','#','.','.'},
					{'#','.','.','.','.','.','#'},
					{'.','#','.','.','#','.','#'}
	};
	int x[4] = {1,0,-1,0};
	int y[4] = {0,1,0,-1};
	queue<pair<int, int>> s;

	for (int i = 0; i < 6; i++){
		for (int j = 0; j < 7; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	int cnt = 0;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 7; j++) {
			if (a[i][j] == '#') {
				cnt++;
				a[i][j] = 'X';
				s.push(make_pair(i, j));
				while (!s.empty()) {
					int dx = s.front().second;
					int dy = s.front().first;
					s.pop();
					for (int k = 0; k < 4; k++) {
						int ddx = dx + x[k];
						int ddy = dy + y[k];
						if (a[ddy][ddx] == '#') {
							s.push(make_pair(ddy, ddx));
							a[ddy][ddx] = 'O';
						}
					}
				}

			}
		}
	}
	cout << endl;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 7; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << cnt;
	return 0;
}