#include <iostream>
#include<set>
using namespace std;

int main()
{
	string a = "It is Time to study" , result;
	int pos, max = INT_MIN;

	while (a.find(' ') != string::npos)
	{
		pos = a.find(' '); //find() 는 index값을 반환한다.
		string temp = a.substr(0, pos);
		int len = temp.size();	
		if (len > max) {
			max = len;
			result = temp;
		}
		cout << temp<<endl;
		a = a.substr(pos + 1);
	}
	cout << a;

	if (a.size() > max) result = a;
	cout << endl << result;
	return 0;
}