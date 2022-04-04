#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct Student {
	int n, p;
	char t;
	Student(int a, char b, int c) {
		n = a;
		t = b;
		p = c;
	}
	bool operator<(const Student& y)const {
		return p < y.p;
	}
};

int main(void)
{
	vector<Student> st;
	vector<char> team = { 'a','b','a','c','b','a','b' };
	vector <int> num = { 17,12,10,11,24,25,12 };

	for (int i = 0; i < 7; i++) {
		st.push_back(Student(i, team[i], num[i]));
	}

	for (auto x : st) cout << x.n << " " << x.t << " " << x.p << endl;;

	sort(st.begin(), st.end());
	cout << "sort--" << endl;
	for (auto x : st) cout << x.n << " " << x.t << " " << x.p << endl;;
	cout << "sum--" << endl;
	for (int i = st.size()-1; i >=0 ; i--)
	{
		cout << st[i].p<<" ";
	}

	return 0;
}