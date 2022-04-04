#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main()
{
	string a = "It is time to Study Go Go ";

	map <string, int> ch; 

	string tmp;
	for (auto x : a)
	{
		if (x == ' ') {
			ch[tmp]++;
			tmp.clear();
		}
		else
			tmp=tmp + x;
	}
	
	for (auto x : ch)
	{
		cout << x.first << " : " << x.second << endl;
	}

	return 0;
}
