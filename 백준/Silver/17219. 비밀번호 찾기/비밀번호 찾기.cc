#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    unordered_map<string, string> mm;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        cin >> mm[s];
    }

    for (int i = 0; i < m; i++) {
        string s;
        cin >> s;
        cout << mm[s] << "\n";
    }


    return 0;
}