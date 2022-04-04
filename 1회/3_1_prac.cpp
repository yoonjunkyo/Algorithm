#include <iostream>
#include <vector>
#include <stack>

using namespace std;


vector<int> sulution(vector<int> h, vector<int> res, int n, stack<int> s)
{
    //�ڿ������� ��ĵ
    for (int i = n; i >= 1; i--)
    {
        while(!s.empty() && h[s.top()] < h[i - 1]) //i��° ���Ұ� �������� Ȯ�� ���� top���� �� ũ�� �Է��ϰ� ���Ÿ� �ݺ�
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
    vector<int> h = { 52,60,53,57,62,61 }; //����Ű����
    vector<int> res(n, 0); //��� ����Ʈ�� 0
    stack<int> s; //����
    vector<int> w;

    w = sulution(h, res, n, s);
    int len = w.size();
    for (int i = 0; i < len; i++)
    {
        cout << w[i] << "  ";
    }

    return 0;
}
