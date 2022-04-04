#include <iostream>
#include <stack>
using namespace std;


void DFS(int L,int S,int n, int ch[10])
{
	if (L == n / 2)
	{
		stack<int> st;

		for (int i = 0; i < n; i++) {
			if (ch[i] == 1)
			{
				st.push(1);
			}
			else if(ch[i] == 0&& !empty(st))
			{
					st.pop();
			}
		}
		if (empty(st))
		{
			for (int i = 0; i < n; i++) cout << ch[i];
			cout << endl << "stack 처리 " << endl;
		}
		st.emplace();
	}
	else
	{
		for (int i = S; i < n; i++)
		{
			ch[i]=1;
			DFS(L + 1, i + 1, n,ch);
			ch[i]=0;
		}
	}
}

int main()
{
	int n = 10;

	int ch[10] = {0};
	DFS(0, 0, n, ch);

	return 0;
}