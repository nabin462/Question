/*Write a program to create a class named actor with data members name and rating. 
Initialize the data members and display those names whose rating is greater than
 5 using the concept of constant object.*/
 #include<iostream>
 using namespace std;
 class actor{
    char name[20];
    int rating;
    public:
    void getdata(){
        cout<<"enter the name and rating "<<endl;
        cin>>name>>rating;
    }
    
    void display(){
        if(rating>5){
            cout<<"name:"<<name<<endl;
            cout<<"rating:"<<rating<<endl;
        }
    }
 };
 int main(){
    actor a[3];
    int i;
    for(i=0;i<3;i++){
        a[i].getdata();
    }
    cout<<"Details of the actor"<<endl;
    for(i=0;i<3;i++){
        a[i].display();
    }
    return 0;
 }
 

