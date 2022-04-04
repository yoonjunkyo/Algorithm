#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int arr[10][10] = { 
	{0,0,0,0,1,0,1,0},
	{0,0,0,1,1,1,1,0},
	{0,0,0,1,1,0,0,0},
	{0,0,0,1,1,1,1,0},
	{1,1,1,1,1,1,1,0},
	{1,1,1,1,1,1,1,0}
	};
	vector<vector<int>> dy(7, vector<int>(9, 0));
	for (int i = 1; i < 7; i++) {
		for (int j = 1; j < 9; j++) {
			if (arr[i-1][j-1] == 1) {
				dy[i][j] = dy[i - 1][j] + dy[i][j - 1] - dy[i - 1][j - 1] +1;
				int x = j;
				int y = i;
				for (int k = 1; k < min(x, y); k++) {
					if (dy[i - k][j - k] == 1) {
						dy[i][j] = dy[i][j] + 1;
					}
				}
			}
			else
			{
				dy[i][j] = dy[i - 1][j]+dy[i][j - 1]- dy[i-1][j - 1];
			}

		}
	}
	for (int i = 1; i < 7; i++) {
		for (int j = 1; j <9; j++) {
			cout << dy[i][j]<<" ";
		}cout << endl;
	}
	return 0;
}
