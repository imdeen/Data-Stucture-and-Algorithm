#include <iostream>

using namespace std;

//rescursive taylor series
double e(int x, int n){
  static double y = 1,z= 1;
  int a;
  if(n==0)
    return 1;
  a = e(x, n-1);
  y = y*x;
  z = z*n;
  return a + y/z;
}

//recursive taylor series horner's rule
double e2(double x, double n){
  static double s;
  if (n==0)
    return s;
  s = x/n*s + 1;
  return e2(x , n-1);
}

//iterative taylor series


double e4(int x, int n){
  double s = 1;
  double num = 1,den = 1;
  int i;

  for(i=1;n>=i;i++){
    num=num*x;
    den=den*i;
    s = s + num/den;
  }
  return s;
}

//iterative taylor series horner's rule
double e3(double x, double n){
  static double s = 1;

  for(;n>0;n--){
    s = 1 + x/n*s;
  }
  return s;
}


int main(){
  cout<<e4(2,3);
  return 0;
}