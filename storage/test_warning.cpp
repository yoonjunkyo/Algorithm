#include <string>
#include <vector>
#include <unordered_map>
#include <set>
#include <iostream>
using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    unordered_map<string, int>user;
    unordered_map<string, int> res;
    for (auto x : id_list) {
        user[x]; res[x];
    }
    set<string>new_report, x_list;
    for (auto x : report) { new_report.insert(x); x_list.insert(x); }
    for (auto x : new_report) {
        int idx = x.find(' ');
        x = x.substr(idx + 1, x.size());
        user[x]++;
    }

    for (auto x : user) {
        if (x.second >= k) {
            for (auto y : x_list) {
                int idx = y.find(' ');
                if (x.first == y.substr(idx + 1, y.size())) {
                    y = y.substr(0, idx);
                    res[y]++;
                }
            }
        }
    }
    for (auto x : res)  answer.push_back(x.second);
    for (auto x : res)  cout << x.first << " " << x.second<<endl;

    return answer;
}

int main() {
    vector<string> id_list = { "muzi", "frodo", "apeach", "neo" };
    vector<string> report = { "muzi frodo","apeach frodo","frodo neo","muzi neo","apeach muzi" };
    int k = 2;
    solution(id_list, report, k);
    return 0;
}