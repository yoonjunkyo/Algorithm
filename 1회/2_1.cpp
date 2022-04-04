#include <iostream>
#include <vector>

using namespace std;

int solution(int w, int h, int t,int s,vector<int> x, vector<int> y) {

	int max = INT_MIN;
	for (int i = 0; i + s < h; i++)//세로스캔
	{
		for (int j = 0; j + s < w; j++) //가로스캔
		{
			//i~i+3 j~j+3 범위안에 xy가 모두 들어와야함
			int count = 0;
			for (int k=0;k<5;k++)
			{
				if ((j <= x[k] && x[k] <= j + 3 )&& (i <= y[k] && y[k] <= i + 3))
				{
					count++;
				}
			}

			if (max < count)
			{
				max = count;
			}
		}
	}
	return max;
}

int main()
{
	int w, h, t, s;
	w = 30; //가로
	h = 30; //세로
	t = 5;  //나무개수
	s = 3;  //영지 면 길이
	
	vector<int> x = { 1,2,3,4,5 }; //x좌표
	vector<int>	y = { 1,2,3,4,5 }; //y좌표
	
	cout<<solution(w, h, t, s, x, y);

	return 0;
}