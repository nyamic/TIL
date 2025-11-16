#include <iostream>
#include <algorithm>
#include <vector>
int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end());

    for (auto &p : v)
    {
        cout << p.first << " " << p.second << "\n";
    }

    return 0;
}