#include <iostream>
#include <map>
#include<set>
using namespace std;

int main()
{
	map<int,int> m;
	int a[10] = { 39 ,31 ,32 ,75 ,75 ,7 ,89 ,21 ,7 ,67 };
	int b[10] = { 4 ,19 ,52 ,75 ,35 ,100 ,4 ,26 ,24 ,69 };
	int c[10] = { 82, 53 ,22 ,64 ,58 ,80 ,94 ,75 ,51 ,69 };
	set<int> sa;
	set<int> sb;
	set<int> sc;
	for (int i = 0; i < 10; i++) {
		sa.insert(a[i]);
		sb.insert(b[i]);
		sc.insert(c[i]);
	}
	int max = INT_MIN;
	for (auto x : sa) m[x]++;
	for (auto x : sb) m[x]++;
	for (auto x : sc) m[x]++;
	for (auto x : m) cout << x.first << " : " << x.second << endl;
	for (auto x : m) if(x.second>max)max=x.second;

	cout <<endl<< max;
	return 0;
}