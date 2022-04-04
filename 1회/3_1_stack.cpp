/*#include <iostream>
#include <vector>
#include <stack>

using namespace std;
//스택에 넣어두고 비교한다음 res에 저장 후 제거 // 제거가 안된 스택들은 res에 저장x
vector<int> sulution(vector<int> h, vector<int> res, int n, stack<int> s)
{
    for (int i = n-1 ; i >= 0; i--) //뒤쪽자리부터 스캔, h[i]의 키를 가진 내가 최초방해자가 되는지
    {
        while (!s.empty() && h[i]>h[s.top()]) //마지막자리에 앉은 사람은 그냥 패스 //스택 번째와 비교하여 크면 방해자
        {
            res[s.top()] = i+1; //인덱스를 결과에 저장 0~5이기 때문에 +1
            s.pop(); //스택에서 하나 제거 //res에 저장했으니까
        }
        s.push(i); //스택에 넣어줌 //인덱스로
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
*/