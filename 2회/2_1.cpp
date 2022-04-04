#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
	string a = "asv039dsa12sf34";
	int res=0;
	int sum=0;
	for (char x : a)
	{
		if (x >= 48 && x <= 57)
		{
			res = res * 10 + (x-48);
			cout << (int)x<<endl;
		}
		else
		{
			sum = sum + res;
			res = 0;
		}
	}

	cout <<"sum : "<< sum;
	return 0;
}
