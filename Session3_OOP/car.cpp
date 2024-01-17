#include<iostream>
using namespace std;

class car{
    public:
    //attributes
    
    int mileage;
    string name;

    //setter
    void setMileage(int newMileage){
        mileage = newMileage;
    }

    void setName(string newName){
        name = newName;
    }

    //getter
    int getMileage(){
        return mileage;
    }

    string getName(){
        return name;
    }

    void carriesPeople(int people){
        cout << name << " is carrying " << people << " with " << mileage << " !" << endl;
    }


};
int main(){
    car SUV;
    SUV.setMileage(45);
    SUV.setName("Thar");

    cout << SUV.getName() << " " << endl;
    cout << SUV.getMileage() << " " << endl;

    //SUV.carriesPeople(4);

}