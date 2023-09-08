#include <stdio.h>

int exponent(int x, int y)
{
    if (y == 0)
    {
        return 1;
    }
    else
    {
        return exponent(x, y - 1) * x;
    }
}

int exponent2(int x, int y)
{
    if (y == 0)
        return 1;
    if (y % 2 == 0)
        return exponent2(x * x, y / 2);
    else
        return x * exponent2(x * x, (y - 1) / 2);
}

int main()
{
    printf("%d", exponent2(3, 2));
    return 0;
}