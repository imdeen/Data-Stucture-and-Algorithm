#include <iostream>

using namespace std;
void recurse(int n)
{
    if (n > 0)
    {
        cout << n;
        recurse(n - 1);
    }
}

int main()
{
    recurse(4);
    return 0;
}
