#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    char t[10] = "Remember";
    string a = "";
    string res = "";
    for (int i = 0; i < sizeof(t); i++)
    {
        t[i] = toupper(t[i]);
        a.push_back(t[i]);
    }

    //cout << a;

    for (int i = 0; i < a.size(); i++)
    {
        if (a.find(a[i]) == i) {
            res.push_back(a[i]);
        }
    }
    cout << res;


    return 0;
}
