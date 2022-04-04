#include<iostream>
#include<vector>

using namespace std;

int main() {
	string a = "acbehf";
	string b = "abefc";

	a = ' ' + a;
	b = ' ' + b;

	int n = a.size();
	int m = b.size();
	vector<vector<int>> dy(n, vector<int>(m, 0)); //m->가로 스캔 default0
	//n->세로스캔 default vector<int>(m, 0) -> 즉, 전부 0으로 초기화
	for (int i = 1; i < n; i++) {
		for (int j = 1; j < m; j++) {
			if (a[i]==b[j])  dy[i][j] = dy[i - 1][j - 1] + 1; 
			else  dy[i][j] = max(dy[i - 1][j], dy[i][j - 1]); 

		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << dy[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}