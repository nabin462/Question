//Make the function into a template, so it can be used with all numerical data types (char, int, float, and so on). Write a main() program to exercise the function with several types.
#include<iostream>
using namespace std;
template <class T>
int max(int a, int b){
    int result;
    result=(a>b)?a:b;
    return result;
}
int main(){
    int a=8,b=7;
    cout<<"the greater in integer value is"<<max(a,b)<<endl;
    char d='d',e='e';
    cout<<"the ASCI  greater value is"<<max(d,e)<<endl;
    float m=9.0,n=3.4;
    cout<<"the float greater value is"<<max(m,n)<<endl;
    return 0;
}
