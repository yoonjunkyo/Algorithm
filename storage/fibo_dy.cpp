#include <iostream>
using namespace std;

int dy[30] = { 0 };

int fib(int a_n) {
    if (a_n == 1 || a_n == 2) {
        dy[a_n - 1] = 1;
        return 1;
    }
    else {
        if (dy[a_n - 1] > 0) { return dy[a_n - 1]; }
        else {
            dy[a_n - 1] = fib(a_n - 1) + fib(a_n - 2);
            return dy[a_n - 1];
        }
    }
}

int main()
{
    int input = 20;
    fib(input);
    for (int i = 0; i < input; i++) cout << dy[i] << " ";

    return 0;
}