#include <iostream>
#include <vector>
#include <stack>

using namespace std;


vector<int> sulution(vector<int> h, vector<int> res, int n, stack<int> s)
{
    //뒤에서부터 스캔
    for (int i = n; i >= 1; i--)
    {
        while(!s.empty() && h[s.top()] < h[i - 1]) //i번째 원소가 방해인지 확인 내가 top보다 더 크면 입력하고 제거를 반복
        {
            res[s.top()] = i;
            s.pop();
        }
        s.push(i - 1);
    }

    return res;
}
int main()
{
    int n = 6;
    vector<int> h = { 52,60,53,57,62,61 }; //앉은키순서
    vector<int> res(n, 0); //결과 디폴트값 0
    stack<int> s; //스텍
    vector<int> w;

    w = sulution(h, res, n, s);
    int len = w.size();
    for (int i = 0; i < len; i++)
    {
        cout << w[i] << "  ";
    }

    return 0;
}
