#include <iostream>
#include <string>
int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, r;
    string s, ans;

    cin >> t;

    for (int k = 0; k < t; k++)
    {
        cin >> r;
        cin >> s;

        for (int i = 0; i < s.size(); i++)
        {
            for (int j = 0; j < r; j++)
            {
                cout << s[i];
            }
        }

        cout << "\n";
    }

    return 0;
}