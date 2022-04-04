#include <iostream>
#include <vector>
using namespace std;

int N = 8;
int D = 4;
int K = 3;
int ch[4];

void DFS(int L, int S,int K)
{
    if (L == K) 
    {
        for (int i = 0; i < 4; i++)
        {
            cout << ch[i] << " ";
        }
        cout << endl;
    }
    else
    {
        for (int i = S; i < D; i++) 
        {
            ch[i] = 1;
            DFS(L + 1, i + 1, K);
            ch[i] = 0;
        }
    }

}
int main()
{

    DFS(0, 0, K);

    return 0;
}
