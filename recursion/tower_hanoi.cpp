#include<iostream>

using namespace std;
int TOH(int n,int a,int b,int c){
    if(n>0){
        TOH(n-1,a,c,b);
        cout<<a<<"to"<<c<<endl;
        TOH(n-1,b,a,c);
    }
    return 0;
}
int main(){
    TOH(3,1,2,3);
    return 0;
}