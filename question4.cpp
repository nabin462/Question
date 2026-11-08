/*Write a program according to the specification given below:

– Create a class Account with data members acc no, balance, and min_balance(static)
-Include methods for reading and displaying values of objects
– Define static member function to display min_balance
-Create array of objects to store data of 5 accounts and read and display values of each object*/
#include<iostream>
using namespace std;
class Account{
    int acc_no,balance;
    static int min_balance;
    public:
    void get(){
        cout<<"enter the account number and balance"<<endl;
        cin>>acc_no>>balance;
    }
    void displa(){
        cout<<"acc_no:"<<acc_no<<endl<<"balance:"<<balance<<endl;
    }
    static void displaymin(){
        cout<<"min_balance:"<<min_balance<<endl;
    }
};
int Account::min_balance=0;
int main(){
    Account a;
    a.get();
    a.displa();
    a.Account::displaymin();
    return 0;
}