/*Write a program to create a class named MOVIE with data members name and genre. 
If the genre of the movie is action then write it to ACTION.DAT */
#include<iostream>
#include<fstream>
#include<string>
 using namespace std;
 class Movie{
    char name[20],genre[20];
    public:
    void getdata(){
        cout<<"enter the movie name and genre"<<endl;
        cin>>name>>genre;
    }
    void write(){
        if(strcmp(genre,"Action")==0||strcmp(genre,"action")==0){
            ofstream fout;
            fout.open("ACTION.DAT");
            fout<<"name:"<<name<<endl;
            fout<<"genre:"<<genre;
            fout.close();

        }
    }
 };
 int main(){
    Movie m;
    m.getdata();
    m.write();
        return 0;
 }