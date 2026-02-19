#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string n;
    cin >> n;

    map<char, int> m;

    for (int i = 0; i < n.size(); i++) {
        m[n[i]]++;
    }

    m['6'] = (m['6'] + m['9']) / 2 + (m['6'] + m['9']) % 2;
    m['9'] = 0;

    auto max = max_element(m.begin(), m.end(), 
    [](const auto& a, const auto& b) {
        return a.second < b.second;
    });

    cout << max->second;

    return 0;
}