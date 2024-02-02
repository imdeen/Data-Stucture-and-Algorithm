#include<iostream>

using namespace std;

class diagonal{
    private:
    int *A;
    int n;

    public:
    diagonal(){
        n=2;
        A=new int[2];
    }
    diagonal(int n){
        this->n=n;
        A = new int[n];
    }
    ~diagonal(){
        delete []A;
    }

void set(int i, int j, int x);
int get(int i, int j);
void display();

};

void diagonal::set(int i,int j,int x){
    if(i==j){
     A[i-1]=x;
    }

}

int diagonal::get(int i,int j){
    if(i==j){
        return A[i-1]; 
    }else{
        return 0;
    }
}
void diagonal::display(){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                cout<<A[i];
            }else{
                cout<<"0";
            }
        }
        cout<<endl;
    }
}

int main(){
    int d;
    cout<<"enter dimensions:"<<endl;
    cin>>d;

    diagonal dm(d);
    int x;
    cout<<"enter the elements:"<<endl;
    for(int i=1;i<=d;i++){
        for(int j=1;j<=d;j++){
            if(i==j)
             cin>>x;
             dm.set(i,j,x);
        }
    }
    dm.display();



    // diagonal d(4);
    // d.set(1,1,3);
    // d.set(2,2,5);
    // d.set(3,3,7);
    // d.set(4,4,9);

    // cout<<d.get(2,2)<<endl;

    // d.display();
    return 0;

}