#include <iostream>
using namespace std;

class Bootcamp
{
private:
    int ID;

public:
    void setdata(int a)
    {
        this->ID = ID;
    }

    void getData()
    {
        cout << ID << endl;
    }

    void printadd(){
        cout<< "obj address = "<<this<<endl;
    }
};
int main()
{
    Bootcamp student;
    Bootcamp prathamesh;
    student.setdata(14);
    student.getData();
    student.printadd();
    prathamesh.printadd();

    return 0;
}