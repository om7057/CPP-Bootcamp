#include<bits/stdc++.h>
using namespace std;
void s(vector<int>&vec){
    for (auto it : vec){
        cout<<it<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v;
    v.push_back(56);
    v.push_back(93);
    v.push_back(56);
    v.push_back(56);
    v.push_back(56);

    s(v);
    v.pop_back();
    v.pop_back();
    v.pop_back();
    s(v);

    v.emplace_back(2);
    s(v);
    // {56,93,2}
    v.insert(v.begin()+1,6);

    s(v);

    v.erase(v.begin());

    s(v);

    v.push_back(2);
    v.push_back(2);
    v.push_back(2);
    v.push_back(2);

    s(v);

    v.erase(v.begin()+2,v.end());
     // {6,93,2,2,2,2,2}


    s(v);

    v.clear();


    v.push_back(2);
    v.push_back(2);
    v.push_back(2);

    cout<<v.size()<<endl;
    // s(v);


    cout<<v.empty()<<endl;
    return 0;
}