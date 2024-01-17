#include<iostream>
using namespace std;

void add(int a, int b, int c){
    cout << "sum = "<< a+b+c<<endl;
}

void add(double a, double b){
    cout << "sum = "<< a+b<<endl;
}
int main(){
   add(2,4,7);
   add(3.4,5.4);
return 0;
}