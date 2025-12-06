#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string s;
    cin >> s;

    int count = 0;
    bool ok = false;

    for (int i = 0; i < n - 1; i++)
    {
        if ((s[i] - 'A') - (s[i + 1] - 'A') == 1 || (s[i + 1] - 'A') - (s[i] - 'A') == 1)
        {
            count++;
        }
        else
        {
            if (count >= 4)
            {
                ok = true;
                break;
            }
            else
            {
                count = 0;
            }
        }
    }

    if (count >= 4)
    {
        ok = true;
    }
    
    cout << (ok ? "YES" : "NO");

    return 0;
}