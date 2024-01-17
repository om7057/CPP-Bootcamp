#include<bits/stdc++.h>

using namespace std;

int main(){

    // pair <int,char> p1 = {1,'a'};

    // cout<<p1.first<<" "<<p1.second<<endl;

    pair <int,int> p2;

    p2 = make_pair(4,5);

    // cout<<p2.first<<" "<<p2.second<<endl;
    
    pair<int,int> p3 = {8,9};

    p2.swap(p3);

    cout<<p2.first<<" "<<p2.second<<endl;

    cout<<p3.first<<" "<<p3.second<<endl;

    pair<int,pair<int,int>> p5 = {8,{2,4}};

    cout<<p5.second.second<<endl;


    pair<int,int> arr[] = {{1,2},{3,4},{56,25}};

    cout<<arr[2].second<<endl;



}