#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void display(priority_queue<int, vector<int>, greater<int>> pq)
{
    while (!pq.empty())
    {
        int curr = pq.top();
        cout << curr << " ";
        pq.pop();
    }
    cout << endl;
}

int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    vector<int> v = {1, 5, 7, 2, 4};
    for(auto it : v)
    {
        pq.push(it);
    }
    display(pq);
    return 0;
}
