#include<iostream>
using namespace std;

class Abstraction{
    
    private:
    int a , b ;
    public:
    void set_data( int x , int  y )
    {
        a = x ;
        b = y ;
    }
    void display()
    {
        cout << "Value of a : " << a << endl ;
        cout << "Value of b : " << b << endl ;
    }

};

int main(){

    Abstraction ab ;

    ab.set_data(10,20) ;
    ab.display() ;


return 0;
}