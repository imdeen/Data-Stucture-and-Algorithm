#include<iostream>

using namespace std;
class Array {
private: 
    int *A;
    int size;
    int length;

public:
    Array(int size){
    this->size=size;
    A = new int [size];
    }

    void create(){
        cout<< "enter number of element:"<<flush;
        cin>> length;
        cout<< "enter number of elemet's values"<<endl;
        for(int i=0;i<length;i++){
            cout<<"Array index: "<< i << "="<<flush;
            cin>> A[i];
        }  
    }

    void display(){
        for(int i=0;i<length;i++){
            cout<<A[i]<<" ";
        }
    }
    ~Array(){
        delete[] A;
    }


};

int main(){
    Array arr(10);
    arr.create();
    arr.display();

    return 0;
}

