#include<iostream>


int comb(int n, int r){
    if(r==0 || n==r){
        return 1;
    }
    return comb(n-1,r-1) + comb(n-1,r);

}

//iterative combination function
int fact(int n){
    int fact=1;
    for (int i=1;i<=n;i++){
        fact = fact * i;     
    }
    return fact;
}

int comb2(int n, int r){
    int num,den;
    num = fact(n);
    den = fact(r)*fact(n-r);
    return num/den;
}

int main(){
    std::cout<<comb(4,2);
}