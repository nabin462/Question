//Write a program to implement function template with multiple arguments.
#include<iostream>
using namespace std;
template<class T, class U>
T sum(T a,U b){
    return a+b;
}
int main(){
    int a=8;
    float b=9.0;
    cout<<"sum="<<sum(a,b);
    return 0;
}
