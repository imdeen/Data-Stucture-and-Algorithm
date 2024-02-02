#include<iostream>
#include<stdlib.h>

using namespace std;

class triDiagonal{
    private:
        int *A;
        int n;
    public:
        triDiagonal(){//n is number of dimensions
            n=2;
            A=new int[2];
        }

        triDiagonal(int n){
            this->n=n;
            A=new int[n*(n+1)/2];
        }

        ~triDiagonal(){
            delete[]A;
        }

        void Rset(int i,int j,int x);
        int Rget(int i,int j);
        void Rdisplay();
        void Cset(int i,int j,int x);
        int Cget(int i,int j);
        void Cdisplay();
        
};

void triDiagonal::Rset(int i, int j, int x){
    if(i>=j){
        A[i*(i-1)/2+(j-1)]=x;
    }
}

int triDiagonal::Rget(int i,int j){
    if(i>=j){
        return A[i*(i-1)/2+(j-1)];
    }else{
        return 0;
    }
}
void triDiagonal::Rdisplay(){
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i>=j){
                cout<<A[i*(i-1)/2+(j-1)]<<" ";
            }else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}

void triDiagonal::Cset(int i,int j,int x){
    if(i>=j){
        A[n*(j-2)-(j-2)*(j-1)/2+(i-j)]=x;
    }

}

int triDiagonal::Cget(int i,int j){
    if(i>=j){
        return A[n*(j-2)-(j-2)*(j-1)/2+(i-j)];
    }else{
        return 0;
    }
}

void triDiagonal::Cdisplay(){
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i>=j){
                cout<<A[n*(j-2)-(j-2)*(j-1)/2+(i-j)]<<" ";
            }else{
                cout<<"0 ";
            }
        }
        cout<<endl;   
    }

}

int main(){
    int l;
    cout<<"enter the dimension u want:"<<endl;
    cin>>l;
    triDiagonal m(l);

    int x;
    cout<<"enter the dimension:"<<endl;
    for(int i=1;i<=l;i++){
        for(int j=1;j<=l;j++){
            if(i>=j){
            cin>>x;
            m.Cset(i,j,x);
            }
        }
    }
    m.Cdisplay();
    m.Cget(2,1);
    
    return 0;


}