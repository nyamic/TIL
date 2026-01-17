#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> input(n);
    vector<int> a(n); // 마지막에 쓸 거
    for (int i = 0; i < n; i++) {
        cin >> input[i];
        a[i] = input[i];
    }

    sort(input.begin(), input.end());

    map<int, int> m;

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (m.find(input[i]) != m.end()) {
            continue;
        }

        m[input[i]] = count;
        count++;
    }

    for (int i = 0; i < n; i++) {
        cout << m[a[i]] << " ";
    }

    return 0;
}