#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> sulution(vector<int> h, vector<int> res, int n, stack<int> s)
{
    for (int i = n-1 ; i >= 0; i--)
    
    {
        while (!s.empty() && h[i]>h[s.top()]) //�������ڸ��� ���� ����� �׳� �н� //���� ��°�� ���Ͽ� ũ�� ������
        {
            res[s.top()] = i+1; //�ε����� ����� ���� 0~5�̱� ������ +1
            s.pop(); //���ÿ��� �ϳ� ���� //res�� ���������ϱ�
        }
        s.push(i); //���ÿ� �־��� //�ε�����
   }

    return res;

}
int main()
{
    int n = 6;
    vector<int> h = { 52,60,53,57,62,61 };
    vector<int> res(n,0);
    stack<int> s;
    vector<int> w;

    w= sulution(h, res, n,s);
    int len = w.size();
    for (int i = 0; i < len; i++)
    {
        cout << w[i] << "  ";
    }

    return 0;
}
