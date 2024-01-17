#include<iostream>
using namespace std;

class Student{
  int rollNo;
  string name;
  char grade;

  public:
  Student(){
    cout<<"We are inside default constructor.\n";
  }

  Student(int rn,string n,char g){
    cout<<"We are inside the parameterized constructor.\n";
    rollNo=rn;
    name=n;
    grade=g;
  }

  Student(Student &t){
    cout<<"We are inside copy constructor.\n";
    rollNo=t.rollNo;
    name=t.name;
    grade=t.grade;
  }

  ~Student(){
    cout<<"We are inside Destructor\n";
  }

  void display(){
    cout<<"Name: "<<name<<endl;
    cout<<"Roll Number: "<<rollNo<<endl;
    cout<<"Grade: "<<grade<<endl;
  }
};

int main(){
     
    Student obj; //Invokes default constructor
    cout<<"This is default Constructor"<<endl;

{
    cout<<"This is Parameterized Constructor";
    Student obj1(34,"Student_Name",'B');
    obj1.display();

    cout<<"This is copy constructor";
    Student obj2(obj1);
    obj2.display();
    cout<<"End of the scope"<<endl;
}
    cout<<"In the Main Function";
    return 0;
}