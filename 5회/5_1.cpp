#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    
    string a = "1234557123455712345571234557";
    unordered_map<char ,int> m;
    int p = 0;
    for (int i = 0; i < a.size(); i++) {
        p++;
        m[a[i]]++;
        bool flag = true;
        for (auto x : m) {
            if (x.second % 2 != 0) {
                flag = false;
            }
        }
        if (flag == true) {
            for (auto x : m)cout << x.first << " " << x.second << endl;
            break;
        }
    }
    p = (p / 2);
    cout << a.substr(0, p);
    return 0;
}