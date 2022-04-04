#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    sort(citations.begin(), citations.end());
    for (auto x : citations) cout << x << " ";
    for (int i = 0; i < citations.size();i++) {
        if (citations[i] <= citations.size() - i) {
            answer = citations[i];
        }
    }
    cout <<" : "<< answer;
    return answer;
}

int main()
{
    vector<int> citations = { 12, 32, 42, 53, 13, 2, 1 };
    solution(citations);
    return 0;
}
