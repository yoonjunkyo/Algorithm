#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<pair<int, int>>graph[10001]; //섬의 개수 10000개
int n = 5; //섬의 개수 5개
int m = 6; //정보의 개수 6개
int s = 1; //start
int e = 5; //end

int Can(int mid) {
	vector<int> ch(n + 1, 0);
	queue<int> Q;
	ch[s] = 1;
	Q.push(s);
	while (!Q.empty()) {
		int v = Q.front();
		Q.pop();
		for (int i = 0; i < graph[v].size(); i++) {
			if (graph[v][i].second >= mid && ch[graph[v][i].first] == 0) {
				ch[graph[v][i].first] = 1;
				Q.push(graph[v][i].first);
			}
		}
	}
	cout << "mid : " << mid<<" ch : ";
	for (auto x : ch) cout << x << " ";
	cout << endl;
	return ch[e];
}
int main()
{
	graph[1] = { {2,5},{3,3},{4,2} }; //{ {b,c},{a,c} } a: 출발 ,b : 도착 ,c :가중치 
	graph[2] = { {4,2} };
	graph[3] = { {4,4} };
	graph[4] = { {5,3} };

	//cout << graph[1][0].second; // 1번과 이어진 것 중 첫번째 원소(0)의 가중치
	int lt = 1;
	int rt = 10;
	int res = 0;

	while (lt <= rt) {
		int mid = (lt + rt) / 2;
		if (Can(mid)) {
			res = mid;
			lt = mid + 1;
		}
		else {
			rt = mid - 1;
		}
	}

	return 0;
}
