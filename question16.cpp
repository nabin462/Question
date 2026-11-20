/*Write a program to define a class named Employee with data members name, age and gender.
 Then create another class named EmployeeSalary inherited from Employee. 
 In this class, the user should give the monthly salary of the employee and 
 calculate the yearly salary after 15% tax deduction. In the main function, 
 you should get the employee’s basic information and salary using inheritance.*/
 #include<iostream>
 using namespace std;
 class Employee{
    char name[20],gender[20];
    int age;
    public:
    void get(){
        cout<<"enter the name ,age and gender employee"<<endl;
        cin>>name>>age>>gender;
    }
    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Gender:"<<gender<<endl;
    }
 };
 class EmployeeSalary:public Employee{
    int salary;
    public:
    void set(){
        get();
        cout<<"enter the employee salary"<<endl;
        cin>>salary;
    }
    void calculate(){
        int tax;
        tax=salary*15/100;
        salary=salary-tax;
         salary=12*salary;
    }

    void show(){
        display();
        cout<<"Salary:"<<salary<<endl;
        
        
    }
 };

 int main(){
    EmployeeSalary s;
    s.set();
    s.calculate();
    s.show();
    return 0;
 }