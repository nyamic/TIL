#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int size = s.size();

    vector<int> v(size);
    for (int i = 0; i < size; i++) {
        v[i] = s[i] - '0';
    }

    sort(v.begin(), v.end(), greater<>());

    for (int i = 0; i < size; i++) {
        cout << v[i];
    }

    return 0;
}