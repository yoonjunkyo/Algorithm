#include <string>
#include <vector>
#include <iostream>
#include<queue>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int n = 0;
    queue<int> Q;
    while (n < progresses.size()) {
        for (int i = 0; i < progresses.size(); i++) {
            progresses[i] = progresses[i] + speeds[i];
        }
        for (int i = n; i < progresses.size(); i++) {
            if (progresses[i] >= 100&&(i==n)) {
                Q.push(i);
                n++;
            }
            else if(progresses[i] >= 100 && !Q.empty()){
                if (Q.back() == i - 1) {
                    Q.push(i);
                    n++;
                }
            }
        }
        int s = 0;
        while (!Q.empty()) {
            Q.pop();
            s++;
        }
        if (s != 0) {
            answer.push_back(s);
        }
        s = 0;
    }
    return answer;
}

int main() {
    vector<int> progresses = { 95, 90, 99, 99, 80, 99 };
    vector<int> speeds = { 1, 1, 1, 1, 1, 1 };
    solution(progresses, speeds);
    return 0;
}