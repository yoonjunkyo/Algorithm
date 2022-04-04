/*#include <iostream>
#include <vector>

using namespace std;

vector<int> sulution(vector<int> h, vector<int> res,int n)
{
    for (int i = 0; i < n; i++) //n번째 학생 i
    {
        int count = 0;
        for (int j = 0; j < i; j++) //n번째 학생 전까지 스캔 비교대상 j
        {
            if (h[j] > h[i])
            {
                res.push_back(j+1);
                count++;
                j = i;
            }    
        }
        if (count == 0) res.push_back(0);

    }

    return res;

}
int main()
{
    vector<int> h = { 52,60,53,57,62,61 };
    vector<int> res ;
    int n = 6;

    res = sulution(h, res, n);
    
    int len= res.size();
    for (int i = 0; i < len; i++)
    {
        cout << res[i]<<"  ";
    }


    return 0;
}
*/