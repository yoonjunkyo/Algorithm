#include <iostream>
#include <string>
#include <vector>

using namespace std;
int ch[20] = {-1};
int cnt = 0;
int DFS(int L, int sz,vector<int> numbers, int target) {
    if (L == sz) {
        int sum = 0;
        for (int i = 0; i < sz; i++) {
            sum = sum + ch[i] * numbers[i];
        }
        if (sum == target) {
            cnt++;
        }
    }
    else
    {
        for (int i = 0; i < 2; i++) {
            if (i == 0) ch[L] = -1;
            else ch[L] = i;
            DFS(L + 1,sz, numbers, target);
        }
    }
    return 0;
}
int solution(vector<int> numbers, int target) {
    int answer = 0;
    int sz = numbers.size();
    DFS(0,sz, numbers, target);
    answer = cnt;
    return answer;
}
int main()
{
    vector<int> numbers = { 1,1,1,1,1 };
    int target = 3;
    solution(numbers, target);

    return 0;
}
