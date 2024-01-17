//1
#include<iostream>
using namespace std;

void swapf(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int a=2;
    int b=37;
    cout<<"values of a and b before swapping:"<<"a:"<<a<<"b:"<<b<<endl;
    swapf(&a,&b);
   cout<<"values of a and b after swapping:"<<"a:"<<a<<"b:"<<b<<endl;
    return 0;
}



// 2)
#include<iostream>
using namespace std;
int main(){
    int a=5;
    int &b=a;

    b=24;
    cout<<"Value of a after changing value of b:"<<a<<endl;

    a=44;
    cout<<"Value of b after changing value of a:"<<b<<endl;

    cout<<&a<<endl;
    cout<<&b<<endl;
}


// 3)
#include<iostream>
using namespace std;

int main(){
    int a = 7;
    int *b = &a;
    int **c = &b;
    cout << "Memory location of 'a' is: " << b << endl;

    cout << *b << endl;

    cout << "Memory location of 'b' is: " << c << endl;

    cout <<  *c << endl;

    cout << "Value at the memory location pointed to by 'c' twice: " << **c << endl;
    
    return 0;
}


