#include <iostream>

using namespace std;
void fun(int);
void fun1(int n)
{
    if (n > 0)
    {
        cout << n << " ";
        fun(n - 1);
    }
}
void fun(int n)
{
    if (n > 0)
    {
        cout << n << " ";
        fun1(n / 2);
    }
}

main()
{
    fun1(20);
    return 0;
}