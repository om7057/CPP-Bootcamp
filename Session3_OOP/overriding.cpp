#include<iostream>
using namespace std;

class base{
    public:
    virtual void print(){
        cout<<"inside the base class"<<endl;
    }
};

class derived : public base{
    public:
    void print(){
        cout<<"inside the derived class"<<endl;
    }
};
int main(){
    base *b;
    derived d;
    b = &d;
    b -> print();
    return 0;
}