#include <iostream>
#include<set>
#include <vector>
using namespace std;

int main()
{
	vector <int> a = { 1,3,2,4,1,3,4,2,1 };
	set <int> s;

	for (int i = 0; i < a.size(); i++)
	{
		s.insert(a[i]);
	}

	cout << s.size()<<endl;

	for (auto it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	for (auto x : s) cout << x << " ";

	if (s.find(3) == s.end()) cout << endl << "false";
	else cout <<endl<< "true";
	return 0;
}