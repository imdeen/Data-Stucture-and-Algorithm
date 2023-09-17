#include<stdio.h>

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
int append(struct Array *arr,int n){
   if(arr->size>arr->length){
    arr->A[arr->length] = n;
    arr->length++;}
    

}

void insert(struct Array *arr,int index, int n){
    if(arr->size>arr->length){
    for (int i=arr->length;i>index;i-- ){
        arr->A[i]=arr->A[i-1];
    }
        arr->A[index]= n;
        arr->length++;
    }
}

int main(){
    struct Array arr1={{4,2,6,8,6},10,5};
    append(&arr1,9);
    insert(&arr1, 2, 9);
    display(arr1);
    return 0;

};

