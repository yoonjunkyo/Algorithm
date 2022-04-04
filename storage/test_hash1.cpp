#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 0;
    map<string, int> m;
    for (int i = 0; i < clothes.size(); i++) {
        m[clothes[i][1]]++;
    }
    int num = 1;
    if (m.size() == 1) {
        num = m[clothes[0][1]];
    }
    else {
        for (auto x : m) {
            num = num * (x.second + 1);
        }
    }
    answer = num;
    return answer;
}

int main()
{
    vector<vector<string>> clothes = { {"yellowhat", "headgear"} ,{"bluesunglasses", "eyewear"},{"green_turban", "headgear"} };
    solution(clothes);

    return 0;
}
