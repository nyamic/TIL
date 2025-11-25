#include <iostream>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int n = s.size();
    int a = s.size();

    while (true)
    {
        if (n > 10)
        {
            for (int i = 0; i < 10; i++)
            {
                cout << s[a - (n--)];
            }

            cout << "\n";
        }
        else
        {
            while (n > 0)
            {
                cout << s[a - (n--)];
            }

            break;
        }
    }

    return 0;
}