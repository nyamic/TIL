#include <iostream>
#include <set>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    set<int> s;

    int n;
    cin >> n;
    
    for (int i =0; i<n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }

    for (int x : s) {
        cout << x << ' ';
    }

    return 0;
}