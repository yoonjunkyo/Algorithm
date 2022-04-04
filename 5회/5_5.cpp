#include<iostream>
#include<vector>
using namespace std;

int a[9] = { 1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9 };
int ch[9], team[3], res = INT_MAX;
int s = 0;
void DFS(int L) { 
	if (L == 9) {
		vector<int> sum(3);
		for (int i = 0; i < 9; i++) {
			sum[ch[i]] += a[i];
		}
		int high = max(sum[0], max(sum[1], sum[2]));
		int low = min(sum[0], min(sum[1], sum[2]));
		res = min(res, high - low);
		for (int i = 0; i < 9; i++) {
			//cout << ch[i] << " ";
		}

		s++;
		//cout << " -> " << s << endl;
		
	}
	else {
		for (int i = 0; i < 3; i++) {
			if (team[i] < 9) {
				team[i]++;
				ch[L] = i;
				DFS(L + 1);
				team[i]--;
			}
		}
	}
}
int main() {
	DFS(0);
	//cout << res;
	cout << s;
	return 0;
}