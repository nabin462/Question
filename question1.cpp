//Explain derived class constructor with suitable program.
#include<iostream>
using namespace std;
class A{
    public:
    int adata;
 A(int a){
        adata=a;
    }
    
};
class B:public A{
    int bdata;
    public:
    B(int a,int b):A(a){
        bdata=b;
    }
    void display(){
        cout<<"a:"<<adata<<endl<<"b:"<<bdata<<endl;
    }
};
int main(){
    B b(8,7);
    b.display();
    return 0;
}