#include <string>
#include <vector>
#include <iostream>
#include <map>
using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    int sz_min = INT_MAX;
    string a = "";
    map<string, int> m;
    for (auto x : phone_book) {
        if (sz_min > x.size()) {
            a.clear();
            sz_min = x.size();
            a = a + x;
        }
    }
    for (auto x : phone_book) { x = x.substr(0, sz_min); m[x]++; }
    if (m[a] > 1) answer = false;
    return answer;
}
int main()
{
    vector<string> phone_book = { "119", "97674223", "1195524421" };
    solution(phone_book);

    return 0;
}
