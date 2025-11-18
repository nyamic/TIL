// 지피티 코드리뷰받고 예외처리 부분 고침

#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    unordered_map<int, string> pokemon;
    unordered_map<string, int> rpokemon;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        pokemon[i + 1] = s;
        rpokemon[s] = i + 1;
    }

    for (int i = 0; i < m; i++)
    {
        string s;
        cin >> s;

        if (!s.empty() && isdigit(s[0])) {
            int x = stoi(s);
            cout << pokemon[x] << "\n";
        } else {
            cout << rpokemon[s] << "\n";
        }
    }

    return 0;
}