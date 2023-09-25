#include<stdio.h>

struct Array {
    int A[10];
    int length;
    int size;
};

int pairing_sum(struct Array m){
    int i,j;
    for(i=0;i<m.length-1;i++){
        for(j=i+1;j<m.length;j++){
            if(m.A[i] + m.A[j] == 10){
                printf("%d + %d = 10 \n",m.A[i],m.A[j]);
            }
        }
    }

}
int pairing_sum2(struct Array m){
    int b[14]={0};
    int i,j;
    for(i=0;i<m.length;i++){
        if(b[10-m.A[i]]==1){
          printf("%d + %d = 10 \n",m.A[i],10-m.A[i]);
        }
        
        else{
          b[m.A[i]]++;
        }
    }

}

//for sorted array
int pairing_sum_sorted(struct Array m){
    int i=0,j=m.length-1;
    while(i<j){
        if(m.A[i]+m.A[j]==10){
            printf("%d+%d=10 \n",m.A[i],m.A[j]);
            i++;
            j--;
        }else if(m.A[i]+m.A[i]<10)
          j--;
        else 
          j++;

    }

}

int main(){
    struct Array x={{2,3,4,5,6,7,8,9,11,13},10,10};
    pairing_sum2(x);

    return 0;
}