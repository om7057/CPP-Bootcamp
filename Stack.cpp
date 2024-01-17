#include<iostream>
#include<stack>
using namespace std;


void display(stack<int> st)
{
    while(!st.empty())
    {
        int t = st.top();
        cout << t << " ";
        st.pop();
    }
}

int main()
{
    stack<int> st;
    cout << st.empty() << endl;
    st.push(2);
    st.push(3);
    st.push(5);
    st.push(7); // 2 3 5 7
    display(st);
    return 0;
}