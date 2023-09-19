#include <stdio.h>

double e(int x, int n)
{
    static double y = 1, z = 1;
    int a;
    if (n == 0)
        return 1;
    a = e(x, n - 1);
    y = y * x;
    z = z * n;
    return a + y / z;
}

// taylor series horner's rule

double e2(int x, int n)
{
    static double s;
    if (n == 0)
        return s;
    s = 1 + x * s / n;
    return e2(x, n - 1);
}

//taylor series horner's rule iterative

double e3(int x, int n){

    double s = 1;
    double num = 1, den = 1;
   
    for(int i=1; i<=n ; i++){
        num = num*x;
        den = den*i;
        s = s + num/den;
    }

    return s;
}



double e4(int x , int n){
    int s = 1;

    for(;n> 0;n--){
        s = 1 + x * s / n;
    }
    return s;
}

int main()
{
    printf("%lf", e2(2, 3));
    return 0;
}
