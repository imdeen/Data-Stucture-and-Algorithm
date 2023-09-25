#include<stdio.h>

struct Array {
    int A[10];
    int size;
    int length;
};

int duplicate(struct Array m){
    int i;
    for(i=0;i<m.length;i++){
        if(m.A[i]==m.A[i+1])
          printf("%d ",m.A[i+1]);
    }
}
int duplicate2(struct Array m){
    int i,j;
    for(i=0;i<m.length;i++){
        if(m.A[i]==m.A[i+1]){
        j=i+1;
        while(m.A[j]==m.A[i])j++;
        printf("%d is appearing %d times \n", m.A[i],j-i);
        i=j-1;
        }
    }
}

int duplicate3(struct Array m){
    int B[10];
    int i;
    for(i=0;i<m.length;i++){
        B[m.A[i]]++;
    }
    for(i=1;i<7;i++){
    if(2<=B[i]){
        printf("%d is apearing %d times \n",i,B[i]);
    }
}
}

int unsorted_duplicate(struct Array m){
    int i,j,count;
    for(i=0;i<m.length;i++){
        count = 1;
        if(m.A[i]!=-1){
        for(j=i+1;j<m.length;j++){
            if(m.A[i]==m.A[j]){
                count++;
                m.A[j]=-1;
            }
        }
        if(count > 1){
            printf("%d is appearing %d times \n",m.A[i],count);
         }
        }
    }
}





int main(){
    struct Array x={{5,3,9,2,5,3},10,6};
    unsorted_duplicate(x);
    return 0;
}