#include <iostream>

using namespace std;
int fact(int n)
{

    if (n == 0)
    {
        return 0;
    }
    else
        return fact(n - 1) + n;
}

int main()
{
    int x = fact(5);
    cout << x;
    return 0;
}
