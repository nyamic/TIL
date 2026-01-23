#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    set<string> set;

    for (int i = 0; i < s.size(); i++) {
        for (int j = 0; j < s.size() - i; j++) {
            string x = s.substr(j, i+1);
            set.insert(x);
        }
    }

    cout << set.size();

    return 0;
}
