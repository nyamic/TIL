#include <iostream>
#include <deque>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;

    deque<int> dq;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        int x;

        if (s == "push_front")
        {
            cin >> x;
            dq.push_front(x);
        }

        if (s == "push_back")
        {
            cin >> x;
            dq.push_back(x);
        }

        if (s == "pop_front")
        {
            if (dq.empty())
            {
                cout << -1 << "\n";
                continue;
            }
            cout << dq.front() << "\n";
            dq.pop_front();
        }

        if (s == "pop_back")
        {
            if (dq.empty())
            {
                cout << -1 << "\n";
                continue;
            }
            cout << dq.back() << "\n";
            dq.pop_back();
        }

        if (s == "size")
        {
            cout << dq.size() << "\n";
        }

        if (s == "empty")
        {
            cout << dq.empty() << "\n";
        }

        if (s == "front")
        {
            if (dq.empty())
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << dq.front() << "\n";
            }
        }

        if (s == "back")
        {
            if (dq.empty())
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << dq.back() << "\n";
            }
        }
    }

    return 0;
}