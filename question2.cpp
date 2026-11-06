//Create a function called swaps() that interchanges the values of the two arguments sent to it
// (pass these arguments by reference).
#include<iostream>
using namespace std;
void swap(int &a, int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main(){
    int a=20,b=9;
    swap(a,b);
    cout<<"a="<<a<<endl<<"b:"<<b<<endl;
    return 0;
}