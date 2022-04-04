#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> res;
    int a[5] = { 1, 2, 3, 4, 5 };
    int b[8] = { 2, 1, 2, 3, 2, 4, 2, 5 };
    int c[10] = { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };

    vector<int>cnt(3,0);
    for (int i = 0; i < answers.size(); i++) {
        if (a[i % 5] == answers[i]) cnt[0]++;
        if (b[i % 8] == answers[i]) cnt[1]++;
        if (c[i % 10] == answers[i]) cnt[2]++;
    }
    
    int ma = max(cnt[0], cnt[1]);
    ma = max(ma, cnt[2]);

    int cc = 0;
    for (auto x : cnt) { 
        cc++;  
        if (x == ma) res.push_back(cc); 
    }
    return res;
}
int main()
{
   vector<int>answers = {1, 2, 3, 4, 5};
    solution(answers);
	return 0;
}
