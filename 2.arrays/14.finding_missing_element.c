#include<stdio.h>
#include<stdlib.h>

struct Array {
    int A[10];
    int size;
    int length;
};

void display(struct Array m){
    for(int i=0;i<m.length;i++){
        printf("%d ", m.A[i]);
    }
}

int missing_element(struct Array m){
    int i,s,sum,result;
    int n = m.A[m.length-1];
    s=0;
    for(i=0;i<m.length;i++){
        s = s + m.A[i];
    }
    sum = n*(n+1)/2;
    result = sum-s;
    return n;
}

int missing_element2(struct Array m){
    int i,s,sum,result;
    s=0;
    int a = m.A[0];
    int l = m.A[m.length-1];
    for(i=0;i<m.length;i++){
        s = s + m.A[i];
    }
    sum = (m.length+1)*(a+l)/2;
    result = sum-s;
    return result;
}
int miss(struct Array m){
    int i;
    for(i=0;i<m.length-1;i++){
        if(m.A[i]+1 != m.A[i+1]){
         printf("%d ", m.A[i]+1);
        }
    }
}


int missing_multi_elements(struct Array m){
    int i,n;
    int diff=m.A[0]-0;
    for(i=0;i<m.length;i++){
        if(m.A[i]-i != diff)
          while(diff<m.A[i]-i){
            printf("%d ", m.A[i]-1);
            diff++;
          }
    }
}

int multi_miss(struct Array m){
    int B[12];
    int i;
    int l = m.A[0];
    int h = m.A[m.length-1];

    for(i=0;i<m.length;i++){
        B[m.A[i]]++;
    }

    for(i=l;i<h;i++){
    if(B[i]==0)
      printf("%d ", i);
    }
};

int main(){
    struct Array x={{5,6,8,10,12,13},10,6};
    multi_miss(x);
    return 0;
}
