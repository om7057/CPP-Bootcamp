#include <bits/stdc++.h>
//OR
#include <set>
using namespace std;
int main(){
    //set<data_type>set_name;
    //e.g
    set<int>squares;

    squares.insert(16);
    squares.insert(1);
    squares.insert(4);
    squares.insert(9);
    squares.insert(9);
     for(auto &x:squares){
        cout<<x<<" ";
     }




    return 0;

}