//Write a C++ program to display the number of objects created using static member.
#include<iostream>
using namespace std;
class Student{
    int id;
    char name[20];
    static int count;
    public:
    void get(){
        cout<<"enter the name and id"<<endl;
        cin>>name>>id;
        count++;
    }
    static void displaycount(){
        cout<<"count:"<<count<<endl;
    }
};
int Student:: count=0;
int main(){
    Student s1,s2;
    s1.get();
    s2.get();
    s2.displaycount();

    return 0;
}