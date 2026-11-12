/*Create a class author with attributes name and qualification.
 Also create a class publication with pname. From these classes derive a classes derive a class 
 book having attributes title and price. Each of the three classes should have getdata() method to
  get their data from user. The classesshould have putdata() method to display the data. 
  Create instance of the class book in main.*/
  #include<iostream>
  using namespace std;
  class author{
    char name[20],qualification[20];
    public:
    void getdata(){
        cout<<"enter the name and qualification"<<endl;
        cin>>name>>qualification;

    }
    void putdata(){
        cout<<"Name:"<<name<<endl;
        cout<<"Qualification:"<<endl;
    }
  };

  class publication{
    char pname[20];
    public:
    void getdata(){
        cout<<"enter the publication name"<<endl;
        cin>>pname;
    }
    
    void putdata(){
        cout<<"Pname:"<<pname;
    }
  };

  class book:public author,public publication{
    char title[20];
    int price;
    public:
    void getdata(){
        author::getdata();
        publication::getdata();
        cout<<"enter the book title and price"<<endl;
        cin>>title>>price;
    }

    void putdata(){
        author::putdata();
        publication::putdata();
        cout<<"Title:"<<title<<endl;
        cout<<"Price:"<<price<<endl;
    }
  };
  int main(){
    book b;
    b.getdata();
    b.putdata();
    return 0;
  }