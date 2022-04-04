#include <iostream>
#include <vector>

using namespace std;
//can : 능력치기록 // ch:0 or 1 팀정함

int DFS(int L, int s, int can[][6], int ch[], int& res, int n) {
	if (L == n / 2) {
		vector <int> A, B;
		for (int i = 0; i < n; i++)
		{
			if (ch[i] == 1) A.push_back(can[0][i]);
			else B.push_back(can[0][i]);
		}
		int sumA = 0;
		int sumB = 0; 
		for (int i = 0; i < A.size(); i++) {
			sumA += A[i];
			sumB += B[i];
		}
		if (A.size() == n / 2) {
			for (int i = 0; i < A.size(); i++)
			{
				cout << A[i] << " : " << B[i] << endl;

			}

			cout << "-------" << endl;
		}
		if (res > abs(sumA - sumB))
		{
			res = abs(sumA - sumB);
		}
		cout << abs(sumA - sumB)<<" : "<<res << endl;
		for (int i = 0; i < 6; i++)
		{
			if (ch[i] == 1)cout << ch[i] << " ";
			else cout << "0 ";
		}
		cout << endl;
	}
	else
	{
		for (int i = s; i < n; i++)
		{
			ch[i] = 1;
			DFS(L+1, i+1, can, ch, res, n);
			ch[i] = 0;
		}
	}

	return res;
}

int main() {
	int n = 6;
	int can[2][6] = {
		{14,22,46,13,36,13},{35,13,35,12,30,24}
	};
	int res = 2147000000;
	int ch[21];

	cout << endl << "ans : " << DFS(0, 0, can, ch, res, n);
	return 0;
}