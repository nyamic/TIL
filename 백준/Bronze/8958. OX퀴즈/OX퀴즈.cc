#include <iostream>
#include <string>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int count = 0;
        int result = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'X') {
                count = 0;
                continue;
            }

            count++;
            result += count;
        }

        cout << result << "\n";
    }

    return 0;
}