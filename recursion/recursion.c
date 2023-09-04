#include <stdio.h> //header

void fun(int n) // 3 is passed
{
   if (n > 0) // yes n is bigger than 0(true) then it will enter inside
   {
      fun(n - 1);      // calling itself again and gain until condition(n>0) become false
      printf("%d", n); // printing number will start at a returning time
   }
}

int main()
{
   int x = 3; // assigning value 3 to x
   fun(x);    // passing argument to above function
   return 0; // is to inform the operating system that program has completed its task without any errors
}