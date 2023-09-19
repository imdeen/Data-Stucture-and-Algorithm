#include<stdio.h>

struct Array {
    int A[10];
    int size;
    int length;

};

void display(struct Array arr){
    for(int i=0;i<arr.length;i++){
        printf("%d ", arr.A[i]);
    }
};

int linear(struct Array arr,int key){
    for(int i=0;i<arr.length;i++){
        if(key == arr.A[i])
          return i;

    }
    return -1;
}

//swap function
void swap(int *x,int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
};

//improved version
int linear2(struct Array *arr,int key){
    for(int i=0;i<arr->length;i++){
        if(key==arr->A[i]){
    
        if(i!=0)   //if i = 0  then skip swap
        swap(&arr->A[i-1],&arr->A[i]); // can also swap with A[0] and A[i] to send A[i] on first index
        return i;
        }
}
    return -1;
}



int main(){
    struct Array arr1 ={{1,2,3,4,5,6,7,8,9,10},10,10};
    
    printf("%d \n", linear2(&arr1,5));
   
      
      
    display(arr1);
};