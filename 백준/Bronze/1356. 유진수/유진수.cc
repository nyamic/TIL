#include <iostream>
#include <string>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    bool ok = false;

    for (int i = 1; i < s.size(); i++) {
        int front = 1;
        int back = 1;

        for (int j = 0; j < i; j++) {
            front *= s[j] - '0';
        }

        for (int j = i; j < s.size(); j++) {
            back *= s[j] - '0';
        }

        if (front == back) {
            ok = true; 
            break;
        }
    }

    cout << (ok ? "YES" : "NO");

    return 0;
}