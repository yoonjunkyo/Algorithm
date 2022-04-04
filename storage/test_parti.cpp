#include <iostream>
#include <vector>
#include <map>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    map<string, int> list;
    for (auto x : participant) list[x]++;
    for (auto x : completion) list[x]--;
    for (auto x : list) if (x.second == 1) answer= answer+x.first;

    return answer;
}
int main()
{
    vector<string> participant = { "leo", "kiki", "eden" };
    vector<string> completion = { "eden", "kiki" };
    cout<<solution(participant, completion);

    return 0;
}
