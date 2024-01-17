#include <iostream>
#include <deque>
using namespace std;

void display(deque<int> dq)
{
    while (!dq.empty())
    {
        int curr = dq.front();
        cout << curr << " ";
        dq.pop_front();
    }
    cout << endl;
}

int main()
{
    deque<int> dq;
    dq.push_back(1);
    dq.push_front(2);
    dq.push_back(3);
    dq.push_front(4);
    display(dq);
    // 4 2 1 3
    return 0;
}