#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main()
{
	string str = { "CbDBEaCEb" };
	unordered_map<char, int> sH, ch;
	string res = { "" };
	//str -> 대문자
	transform(str.begin(),str.end(), str.begin(),toupper);
	for (int i = 0; i < str.size(); i++)  cout << str[i] << endl;;
	//unordered_map sH에 str 추가(key, value)
	//unordered_map ch에 str 추가(key만)
	for (auto x : str) { sH[x]++; ch[x]; }
	for (auto x : sH) cout << x.first << " " << x.second << endl;
	//처음문자는 그냥 입력
	res.push_back(str[0]); sH[str[0]]--; ch[str[0]]++;
	for (auto x : sH) cout << x.first << " " << x.second << endl;
	//for문 돌림 -> sH에서 해당 키-- ->ch0인지 확인->앞과 비교해서 res[i-1]삭제(단 뒤에 쓸게 있으면), ch++, res추가
	for (int i = 1; i < str.size(); i++)
	{
		sH[str[i]]--;
		if (ch[str[i]] == 0) {
			if (str[i] < str[i - 1])
			{
				if (sH[str[i-1]] > 0) {
					res.pop_back();
					ch[str[i-1]]--;
				}
				res.push_back(str[i]);
			}
			else
			{
				res.push_back(str[i]);
			}
			ch[str[i]]++;
		}
	}
	cout << endl;
	for (int i = 0; i < res.size(); i++)  cout << res[i];

	return 0;
}