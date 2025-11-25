#include <iostream>
#include <deque>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    deque<int> dq;
    for (int i = 1; i <= n; ++i) {
        dq.push_back(i);
    }

    int step = 0;

    while(dq.size() > 1) {
        if (step == 0) {
            dq.pop_front();
            step = 1;
        } else {
            int x = dq.front();
            dq.pop_front();
            dq.push_back(x);
            step = 0;
        }
    }

    cout << dq.front();
    

    return 0;
}