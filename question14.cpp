/*Write a program to create a class named MOVIE with data members name and genre. If the genre of the movie is comedy then 
write it to COMEDY.DAT */
#include<iostream>
#include<fstream>
using namespace std;
class Movie{
    char name[20],genere[20];
    public:
    void get(){
        cout<<"enter movie name and genre"<<endl;
        cin>>name>>genere;
    }
    void display(){
        if(strcmp(genere,"comdey")==0||strcmp(genere,"Comedy")==0){
            ofstream fout;
            fout.open("COMEDY.DAT");
            fout<<"name:"<<name<<endl;
            fout<<"genre:"<<genere<<endl;
            fout.close();
        }
    }
};


int main(){
    Movie m;
    m.get();
    m.display();
    return 0;
}