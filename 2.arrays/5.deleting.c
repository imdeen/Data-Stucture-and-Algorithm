#include <stdio.h>

struct Array{
    int A[10];
    int size;
    int length;
};
void display(struct Array arr){
    for(int i=0;i<arr.length;i++){
        printf("%d ", arr.A[i]);
    }
};

int delete(struct Array *arr,int index){
    int x=0;
    if(index>=0&&index<arr->length){
    x = arr->A[index];
    for(int i=index; i<arr->length-1;i++ ){
        arr->A[i]=arr->A[i+1];
    }
    arr->length--;}
    return x;
}



int main(){
    struct Array arr1 ={{1,2,3,4,5},10,5};

    int x=delete(&arr1,4);
    printf("%d \n", x);

    display(arr1);

};