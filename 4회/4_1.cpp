#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> seat)
{
	int dis[10] = {};
	int p = 1000;
	for (int i = 0; i < seat.size(); i++)
	{
		if (seat[i] == 1)
		{
			p = 0;
			dis[i] = p;
			p++;
		}
		else
		{
			dis[i] = p;
			p++;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		cout << dis[i];
	}
	for (int i = seat.size()-1; i >=0; i--)
	{
		if (seat[i] == 1)
		{
			p = 0;
			dis[i] = p;
			p++;
		}
		else
		{
			dis[i] = min(dis[i],p);
			p++;
		}
	}
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << dis[i];
	}
	return 0;
}

int main()
{
	vector<int> seat = { 1, 0, 0, 0, 1, 0, 0, 1, 0, 1 };

	solution(seat);

	return 0;
}
