#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main()
{
	string a = "It is time to Study Go Go";

	map <char, int> ch; //unordered_map

	for (auto x : a)
	{
		if (x != ' ') ch[x]++;
	}
	
	for (auto it = ch.begin(); it != ch.end(); it++)
	{
		cout << it->first << " : " << it->second << endl;
	}
	ch['K']; //key생성
	ch['R']++; //key생성 + value ++
	for (auto x : ch)
	{
		cout << x.first << " : " << x.second << endl;
	}

	return 0;
}