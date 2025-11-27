//우선순위큐 예외처리 추가 

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    priority_queue<int> pq;

    int n;
    int dasom;

    cin >> n;
    cin >> dasom;

    if (n == 1) {
        cout << 0;
        return 0;
    }

    for (int i = 0; i < n - 1; i++)
    {
        int x;
        cin >> x;
        pq.push(x);
    }

    int count = 0;
    while (dasom <= pq.top())
    {
        int x = pq.top();
        pq.pop();
        pq.push(x - 1);
        dasom++;
        count++;
    }

    cout << count;

    return 0;
}