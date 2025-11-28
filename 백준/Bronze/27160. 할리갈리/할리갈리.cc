#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<string, int> m = {
        {"STRAWBERRY", 0},
        {"BANANA", 0},
        {"LIME", 0},
        {"PLUM", 0}};

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        int x;
        cin >> x;

        m[s] += x;
    }

    if ((m["STRAWBERRY"] == 5) || (m["BANANA"] == 5) || (m["LIME"] == 5) || (m["PLUM"] == 5))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}