#include <iostream>
#include <string>
using namespace std;

class MyClass {
    private:
    int data;
public:
    MyClass& setData(int newData) {
        data = newData;
        return *this;  // Return the modified object
    }

    MyClass& add(int valueToAdd) {
        data += valueToAdd;
        return *this;  // Return the modified object
    }

    MyClass& mul(int multiplier) {
        data *= multiplier;
        return *this;  // Return the modified object
    }

    void display() {
        cout << "Data: " << data << endl;
    }

};

int main() {
    MyClass myObject;

    // Method chaining using the 'this' pointer
    myObject.setData(20).add(5).mul(2).add(10).display();
    myObject.setData(10).add(5).mul(2).display();
    
    return 0;
}
