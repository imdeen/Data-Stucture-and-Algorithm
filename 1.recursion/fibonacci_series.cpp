#include <iostream>

// fibonacci series using recursion
using namespace std;
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 2) + fib(n - 1);
}

// fibonacci series using iteration

int fib2(int n)
{
    int t0 = 0, t1 = 1, s;
    if (n <= 1)
        return 1;
    for (int i = 2; i <= n; i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}

// fiboancci series using recusrion with memoisation
int F[20];
int fib3(int n)
{
    if (n <= 1)
    {
        F[n] = n;
        return n;
    }
    else if (F[n - 2] == -1)
        F[n - 2] = fib(n - 2);
    if (F[n - 1] == -1)
        F[n - 1] = fib(n - 1);
    F[n] = F[n - 2] + F[n - 1];
    return F[n];
}

int main()
{
    cout << fib2(7);
}