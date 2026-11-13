//Write a program to illustrate inline function.
#include<iostream>
using namespace std;
inline void sum(int a,int b){
    int s;
    s=a+b;
    cout<<"sum="<<s<<endl;

}
int main(){
    sum(7,9);
    return 0;
}