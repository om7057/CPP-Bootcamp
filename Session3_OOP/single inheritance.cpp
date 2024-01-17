#include <iostream>
using namespace std;


class Animal {
    protected:
    Animal(){
        cout<<this<<endl;
    }
    void eat() {
        cout << "Animal is eating." << endl;
    }

    void sleep() {
        cout << "Animal is sleeping." << endl;
    }
};

class Dog : private Animal {
public:
    void bark() {
        cout << "Dog is barking." << endl;
    }
};

int main() {

    Dog myDog;

    
    myDog.eat();   
    myDog.sleep(); 


    myDog.bark();  

    return 0;
}
