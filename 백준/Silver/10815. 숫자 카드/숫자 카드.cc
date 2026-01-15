#include <iostream>
#include <unordered_set>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    unordered_set<int> s;

    int n, m;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }

    cin >> m;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        cout << s.count(x) << " ";
    }

    return 0;
}