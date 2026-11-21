/*Create a class BOOK with data members name and price. Write a 
member function that will take two objects of BOOK class and return the object with lower price.*/
#include<iostream>
#include<string>
using namespace std;
class Book{
    string name;
    float price;
    public:
    void get(string n, float p){
        name=n;
        price=p;
    }
    Book lowerprice(Book b1,Book b2){
        if(b1.price<b2.price){
            return b1;
        }
        else{
            return b2;
        }
    }
    void display(){
        cout<<"name"<<name<<endl;
    cout<<"price:"<<price<<endl;    }
};
int main(){
    Book b1,b2,lower,chepest;
    b1.get("math",250.23);
    b2.get("science",300.25);
   chepest= lower.lowerprice(b1,b2);
    chepest.display();
    return 0;
}