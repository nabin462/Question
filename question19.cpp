/*Write a C++ program to demonstrate multilevel inheritance using three classes: Student, 
Test and Result. Store student details and marks in appropriate classes and 
display the total marks.*/
#include<iostream>
using namespace std;
class Student{
  
    char name[20];
    int roll;
      public:
    void get(){
        cout<<"enter the name and roll"<<endl;
        cin>>name>>roll;
    }
    void display(){
        cout<<"name:"<<name<<endl;
        cout<<"roll:"<<roll<<endl;
    }

};
class Test:public Student{
       public:
    int math,science, computer;
    void set(){
        get();
        cout<<"enter the mark of math ,science, computer"<<endl;
        cin>>math>>science>>computer;
    }
    void show(){
        display();
        cout<<"math:"<<math<<endl;
        cout<<"science:"<<science<<endl;
        cout<<"computer:"<<computer<<endl;
    }
};
class Result:public Test{
    int total;
    public:
    void getdata(){
        set();

    }

    void calTotal(){
        total=math+science+computer;

    }
    void displaydat(){
        show();
        cout<<"total mark:"<<total<<endl;

    }
};
int main(){
    Result r;
    r.getdata();
    r.calTotal();
    r.displaydat();
    return 0;
}