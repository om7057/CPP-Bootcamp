#include<iostream>
#include<stack>
using namespace std;

string reverse(string temp)
{
    // BOOTCAMP

    string ans = "";
    stack<char> st;
    for(auto &it : temp)
    {
        st.push(it);
    }
    while(!st.empty())
    {
        char t = st.top();
        ans += t;
        st.pop();
    }
    return ans;
}

int main()
{
    string temp;
    cin >> temp;
    string ans = reverse(temp);
    cout << ans << endl;
    return 0;
}