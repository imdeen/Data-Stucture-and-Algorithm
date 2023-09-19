#include<stdio.h>

struct Array {
    int A[10];
    int size;
    int length;
};

void display(struct Array n){
    for(int i=0;i<n.length;i++){
        printf("%d ",n.A[i]);
    }
};

int binary_search(struct Array n,int key){
    int l = 0,h=n.length-1,mid;
    while(l<=h){
        mid=(l+h)/2;
        if(key==n.A[mid])
          return mid;
        else if(n.A[mid]>key)
          h=mid-1;
        else
          l=mid+1;
    }
    return -1;
}

int main(){
    struct Array m={{4,6,8,11,13,17,19,23,35,37},10,10};
    printf("%d\n", binary_search(m,35));
    display(m);

};