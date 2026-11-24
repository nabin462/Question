/*Write a C++ program to demonstrate multiple inheritance.
 Create two base classes Academic and Sports. Derive a class Result from both classes and 
display the academic marks, sports marks and total score.*/
#include<iostream>
using namespace std;
class Academic{
    protected:
    int mark;
    public:
    void get(){
        cout<<"enter the academic mark"<<endl;
        cin>>mark;
    }
    void display(){
        cout<<"Academic mark:"<<mark<<endl;
    }
};
class Sports{ 
    protected:
    int sportmark;
    public:
    void set(){
        cout<<"enter the sport mark"<<endl;
        cin>>sportmark;
    }
    void show(){
        cout<<"Sport mark:"<<sportmark<<endl;
    }

};
class Result:public Academic,public Sports{
    int totalscore;
    public:
    void getsport(){
         get();
        set();
       
    }
    void total(){
        totalscore=mark+sportmark;
    }
    void displayres(){
        display();
        show();
        cout<<"totalscore:"<<totalscore<<endl;
    }

};
int main(){
    Result r;
    r.getsport();
    r.total();
    r.displayres();
    return 0;
}