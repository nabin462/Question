//Write a program to show the destructor call such that it prints the message “memory is released”.
#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"memory is allocated"<<endl;
    }

    ~A(){
        cout<<"memory is relase"<<endl;
    }
};
int main(){
    A a;
    return 0;
}