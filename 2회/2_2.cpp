#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main()
{
	string s = "eabcbacade";
	string t = "abc";
	int count=0;

	unordered_map<char, int> sH; 
	unordered_map<char, int> tH; //abc를 담을 맵

	for (auto x : t) tH[x]++;  //abc : 111

	int L = t.size() - 1; 

	for (int i = 0; i < L; i++) sH[s[i]]++; //string s중 앞의 두개만 맵에 추가 - ea : 11
	
	//sH에 하나 추가 -> sH tH같은지 확인 -> 같으면 count++ -> 맨 앞 제거
	int lt = 0;
	for (int rt = L; rt < s.size(); rt++)
	{
		sH[s[rt]]++;
		if (sH == tH)
		{
			count++;
		}	
		for (auto x : sH)
		{
			cout << x.first << " : " << x.second << endl;
		}
		cout << endl;

		sH[s[lt]]--; //value제거
		if (sH[s[lt]] == 0) sH.erase(s[lt]); //key제거
		lt++;
	}

	cout << count;

	return 0;
}