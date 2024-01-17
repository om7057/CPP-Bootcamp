#include<bits/stdc++.h>

using namespace std;

int main() {


	vector<int>v  =  {1, 3, 9, 7, 3, 2, 10, 9, 7, 4};
    string s = "abbbzdornfshdhfjs";


	//sort vector

    sort(v.begin(),v.end());

    for(auto &i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    sort(s.begin(),s.end());

     for(auto &i:s){
        cout<<i;
    }
    cout<<endl;









    //sort string

    //sort(s.begin(),s.end());
    //cout<<s<<endl;



	//min element

    int mini = *min_element(v.begin(),v.end());

    cout<<mini<<endl;


	//max element
    int maxi = *max_element(v.begin(),v.end());
    cout<<maxi<<endl;





	//accumulate
    int sum = accumulate(v.begin(),v.end(),0);
    cout<<sum<<endl;


	//count
    int threecnt = count(v.begin(),v.end(),3);
    cout<<"Three occured "<<threecnt<<" times"<<endl;

	//reverse
    // reverse(v.begin(),v.end());
    //  for(auto &i:v){
    //     cout<<i<<" ";
    // }

	//lower bound
    auto lb = lower_bound(v.begin(),v.end(),8);

    cout<<*lb<<endl;


	//upper bound
    int ub  = *upper_bound(v.begin(),v.end(),3);
    cout<<"Upper bound of three is :"<<ub<<endl;


	// cout << "(>: Here we conclude our session \n    Best Of Luck for the contest (>:";

  return 0;

}