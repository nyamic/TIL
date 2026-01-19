#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n, s;
    cin >> s;

    long long int i = 1;
    while (s >= i) {
        s -= i;
        i++;
    }

    cout << i-1;

    return 0;
}

