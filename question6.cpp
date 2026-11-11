//Write a program that read values of two objects of student class(assume data members are sid , sname, and level) and display the data in monitor.
#include<iostream>
#include<fstream>
using namespace std;
class student{
    int sid;
    char sname[20],level[20];
    public:
    void read_data(){
        cout<<"enter the name ,id and level"<<endl;
        cin>>sname>>sid>>level;
    }
    void write_data(){
        cout<<"Name:"<<sname<<endl<<"ID:"<<endl<<"Level:"<<endl;
    }


};
int main(){
    student s;
    ifstream fin;
    fin.open("student.txt");
    for(int i=0;i<2;i++){
        fin.read((char*)&s,sizeof(student));
        s.write_data();
    }
    fin.close();

    return 0;
}