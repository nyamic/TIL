#include <iostream>
#include <string>
#include <set>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int count = 0;
    set<string> s;

    while (n--)
    {
        string chat;
        cin >> chat;

        if (chat == "ENTER")
        {
            s.clear();
        }
        else if (!s.count(chat))
        {
            s.insert(chat);
            count++;
        }
    }

    cout << count;

    return 0;
}