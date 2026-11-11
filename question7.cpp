//How can we use it for name conflict resolution? Illustrate with example.
#include<iostream>
using namespace std;
class Student{
    char name[20];
    int age;
    public:
    void get(char name[],int age){
        strcpy(this->name,name);
        this->age=age;
    }

    void display(){
        cout<<"name:"<<name<<endl<<"age:"<<age<<endl;
    }
};
int main(){
    Student s;
    s.get("nabin",20);
    s.display();
    return 0;
}