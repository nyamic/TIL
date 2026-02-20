#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    getline(cin, s);
    int n = s.size();
    
    int i = 0;
    while (i < n) {
        if (s[i] == '<') {
            // 태그: 그대로 출력
            while (i < n && s[i] != '>') {
                cout << s[i++];
            }
            cout << s[i++]; // '>' 출력
        } else if (isalpha(s[i]) || isdigit(s[i])) {
            // 단어: 모아서 뒤집어 출력
            string word;
            while (i < n && (isalpha(s[i]) || isdigit(s[i]))) {
                word += s[i++];
            }
            reverse(word.begin(), word.end());
            cout << word;
        } else {
            // 공백 등: 그대로 출력
            cout << s[i++];
        }
    }
    cout << "\n";
    return 0;
}