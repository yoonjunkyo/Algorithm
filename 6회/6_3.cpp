#include <iostream>
#include <vector>

using namespace std;

int n = 6;
int m = 8;
vector<string>board = {
    "00001010",
    "00011110",
    "00011000",
    "00011110",
    "11111110",
    "11111110"
};
vector<vector<int>> dy(n, vector<int>(m, 0));

int main()
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (board[i][j] == '0') {
                cout << 0 << " ";
                continue;
            }
            int a = 0, b = 0, c = 0;
            if (i >= 1) a = dy[i - 1][j];
            if (j >= 1) b = dy[i][j - 1]; 
            if (j >= 1 && i >= 1) c = dy[i-1][j - 1];
            dy[i][j] = min(a, min(b, c))+1;
            cout << dy[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}