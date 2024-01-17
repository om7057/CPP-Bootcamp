#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void display(priority_queue<pair<int, string>> pq)
{
    while (!pq.empty())
    {
        auto it = pq.top();
        cout << it.second << " => " << it.first << "\n";
        pq.pop();
    }
    cout << "\n";
}
int main()
{
    
    return 0;
}