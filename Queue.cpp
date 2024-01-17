#include <iostream>
#include <queue>
using namespace std;

void display(queue<int> q)
{
    while (!q.empty()) // q.empty() == false
    {
        int curr = q.front();
        cout << curr << " ";
        q.pop();
    }
    cout << "\n";
}

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.pop();
    // 1 2 3 4 5
    display(q);
    return 0;
}