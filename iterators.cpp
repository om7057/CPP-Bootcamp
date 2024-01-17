#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5,6};
    vector<int>:: iterator p;
    
    for (p = v.begin();p!=v.end();p++){
        cout<<*p<<" ";
    }
    cout<<endl;

    for(auto it : v){
        cout<<it<<" ";
    }
    cout<<endl;

    for(auto &it :v){

        cout<<it<<" ";
    }
    cout<<endl;
    
}