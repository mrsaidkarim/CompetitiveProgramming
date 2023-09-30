#include <iostream>

using namespace std;

int memo[45];

int fib(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else if (memo[n] != -1)
        return memo[n];
    memo[n] = fib(n - 1) + fib(n - 2);
    return memo[n];
}

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < 45; i++)
    {
        memo[i] = -1;
    }
    cout << fib(n) << endl;
    return 0;
}
