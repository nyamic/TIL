#include <iostream>
#include <string>
#include <queue>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    queue<int> q;

    for (int i = 0; i < n; i++)
    {

        string s;
        cin >> s;

        if (s == "push")
        {
            int x;
            cin >> x;
            q.push(x);
        }

        if (s == "pop")
        {
            if (q.empty())
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << q.front() << "\n";
                q.pop();
            }
        }

        if (s == "size")
        {
            cout << q.size() << "\n";
        }

        if (s == "empty")
        {
            cout << (int)(q.empty()) << "\n";
        }

        if (s == "front")
        {
            if (q.empty())
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << q.front() << "\n";
            }
        }

        if (s == "back")
        {
            if (q.empty())
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << q.back() << "\n";
            }
        }

    }

    return 0;
}