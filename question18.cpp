/*Write a C++ program to demonstrate single inheritance. Create a base class Person with 
data members name and age. Derive a class Student with data member roll. 
Display all information using a member function*/
#include<iostream>
using namespace std;
class Parent{
    char name[20];
    int age;
    public:
    void set(){
        cout<<"enter the name and age"<<endl;
        cin>>name>>age;
    }
    void show(){
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
    }

};
class Student:public Parent{
    int roll;
    public:
    void get(){
        set();
        cout<<"enter the roll number"<<endl;
        cin>>roll;
    }
    void display(){
        show();
        cout<<"roll:"<<roll<<endl;
    }
};
int main(){
    Student s;
    s.get();
    s.display();
    return 0;
}