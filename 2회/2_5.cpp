#include <iostream>
#include <vector>
using namespace std;

int N = 8;
int D = 4;
int K = 3;
vector<int>student = { 1,6,4,3,0,3,14,12 };
vector<int>g_pow = { 1,2,4,8 };
int g_bit = 0;
int cnt = 0;

void DFS(int L,int S) {
	if (L == K) {
		for (int i = 0; i < student.size(); i++) {
			if ((g_bit & student[i]) == student[i]) cnt++;
			cout << (g_bit & student[i])<<" ";
		}
		cout <<"g_bit : "<< g_bit <<" cnt : "<< cnt <<endl;
		cnt = 0;
	}
	else {
		for (int i = S; i < D; i++) {
			g_bit = g_bit + g_pow[i];
			DFS(L + 1, i + 1);
			g_bit = g_bit - g_pow[i];
		}
	}
}
int main()
{
	DFS(0, 0);

	return 0;
}
