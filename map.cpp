#include<bits/stdc++.h>

using namespace std;

int main(){


	unordered_map<int,string>mp;
	//key = integer   value = name 

	mp[28] = "yash";

	mp[58] = "vishal";

	mp[114] = "harsh";

	


    

	auto it  = mp.find(28);


	mp.erase(it);

	for(auto &i:mp){
		cout<<i.first<<" "<<i.second<<endl;
	}


	// map<string,int>mp;

	//key = name   value = integer






	//some member functions


	//find


	//erase






}