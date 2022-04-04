#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> solution(vector<int> array, vector<vector<int>> commands) {
	vector<int> answer;
	vector<int> res;

	for (int i = 0; i < commands.size(); i++) {
		for (int j = commands[i][0]; j <= commands[i][1]; j++) {
			res.push_back(array[j - 1]);
		}
		sort(res.begin(), res.end());
		for (auto x : res) cout << x << " ";
		cout << endl;
		answer.push_back(res[commands[i][2] - 1]);
		res.clear();
	}
	return answer;
}
int main()
{
	vector<int> array = { 1, 5, 2, 6, 3, 7, 4 };
	vector<vector<int>> commands = { {2, 5, 3},{4, 4, 1},{1, 7, 3} };
	solution(array, commands);
	for(auto x:)
	return 0;
}