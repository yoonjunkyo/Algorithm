#include <iostream>
#include <stack>
using namespace std;

int main()
{
	string a = "2(ab)(k)3(bc)";
	string res = "";
	string tmp = "";
	int n = 1;
	for (int i = 0; i < a.size(); i++) {
		if (48 <= a[i] && a[i] <= 57) {
			n = a[i]-48;
		}
		else if (a[i] != '(') {
			tmp.push_back(a[i]);
			if (a[i] == ')') {
				tmp.pop_back();
				for (int i = 0; i < n; i++) {
					res = res + tmp;
				}
				n = 1;
				tmp.clear();
			}
		}
	}
	cout << res;

	return 0;
}
