#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) {
        if (a.second == b.second) {
            return a.first < b.first;
        }
        return a.second < b.second;
    });


    int result = 1;
    auto tmp = v[0];
    
    for (int i = 1; i < n; i++) {
        if (tmp.second > v[i].first) {
            continue;
        }

        result++;
        tmp = v[i];
    }

    cout << result;

    return 0;
}