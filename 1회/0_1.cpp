#include <iostream>
using namespace std;

int main()
{
	string a = "Time is 2022Year 02Month";

	cout << a<<endl;

	cout << a.size()<<endl;

	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i];
	}
	cout << endl;
	for (int i = 0; i < a.size(); i++)
	{
		if (isupper(a[i])==true) {
			cout << a[i];
		}
	}
	cout << endl;

	for (int i = 0; i < a.size(); i++)
	{
		if (islower(a[i])) {
			cout << a[i];
		}
	}
	cout << endl;

	for (int i = 0; i < a.size(); i++)
	{
		if (isdigit(a[i])) {
			cout << a[i];
		}
	}

	cout <<endl<< a.find('T')<<endl;

	a.push_back('s');
	cout << a<<endl;

	a.pop_back();
	cout << a << endl;

	a = a + 's';
	cout << a << endl;

	a = a + " 27day";
	cout << a << endl;

	cout << a.substr(8) << endl;

	cout << a.substr(0,4) << endl;

	a.clear();

	cout <<"clear!" <<a;


	return 0;
}
