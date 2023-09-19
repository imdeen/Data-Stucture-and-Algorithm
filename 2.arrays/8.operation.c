#include<stdio.h>

struct Array {
    int A[10];
    int size;
    int length;
};
void display(struct Array m){
    for(int i=0;i<m.length;i++){
        printf("%d",m.A[i]);
}
};

//get the value of index in a array
int get(struct Array m,int index){
    if(index<m.length){
     return m.A[index];}
    else
     return -1;
}
//set the value of index in array
int set(struct Array *m,int index,int number){
    if(index<m->length){
        m->A[index]=number;
    }
    else
     return -1;

}
//find  the max value in array
int max(struct Array m){
    int max=0;
        max = m.A[0];

    for(int i=1;i<m.length;i++){
        if(max<m.A[i]){
            max=m.A[i];
        }
}
       return max;
}
//find  the min value in array
int min(struct Array m){
    int min=m.A[0];
    for(int i=0;i<m.length;i++){
        if(min>m.A[i]){
            min = m.A[i];
        }
    }
    return min;
}
//finding sum of all array values
int sum(struct Array m){
    int i,sum=0;
    for(i=0;i<m.length;i++){
        sum = sum + m.A[i];
}
return sum;
};

// finding average of all array value
float avg(struct Array m){
    return (float)sum(m)/m.length;
};

float avg2(struct Array m){
    int i,sum=0;
    float avg;
    for(i=0;i<m.length;i++){
        sum = sum + m.A[i];
    }
    avg = (float)sum/m.length;
    return avg;
   
};

int main(){
    struct Array n = {{3,5,7,8,9,55,13,17,1,23},10,10};
//    printf("%d\n", get(n,9)) ;
//    set(&n,1,9);
  printf("%d \n", min(n)) ;
//   printf("%.2f \n", avg2(n) );
//    display(n);
};