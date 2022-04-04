#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <map>
using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer(5,0);
    map<int, int>m;
    stack<int> s;
    s.push(0);
    for (int i = 0; i < prices.size(); i++) {
        for (int j = 0; j <= i; j++) {
            if (prices[i] >= prices[s.top()]) {
                answer[j]++; 
                s.pop();
                s.push(j);
            }
        }
        s.emplace();
    }
    for (auto x : answer) {
        cout << x;
    }
    return answer;
}
int main()
{
    vector<int> prices = { 1, 2, 3, 2, 3 };
    solution(prices);

    return 0;
}