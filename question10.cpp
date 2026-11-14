//Write a program for illustrating use of new and delete.
#include<iostream>
using namespace std;
int main(){
    int *ptr=new int;
    int a=90;
    *ptr=a;
    cout<<"ptr="<<*ptr<<endl;
    delete ptr;
    ptr=nullptr;
    return 0;


}