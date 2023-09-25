#include<stdio.h>

struct Array {
    int a[10];
    int size;
    int length;

};

int display(struct Array m){
    for(int i=0;i<m.length;i++){
        printf("%d ", m.a[i]);
    }
};
int min_max(struct Array m){
    int i;
    int max = m.a[0];
    int min = m.a[0];
    for(i=1;i<m.length;i++){
        if(m.a[i]>max){
            max = m.a[i];
        }
        else if(m.a[i]<min){
            min = m.a[i];
        }

    }
    printf("%d and %d",min,max);


};

int main(){
    struct Array x ={{7,4,6,3,25,7,3,89,23,1},10,10};
  min_max(x);
    return 0;
};