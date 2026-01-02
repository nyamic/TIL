#include <iostream>
#include <string>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    if (n == 0) {
        cout << 0;
        return 0;
    }

    int n2=0, n5=0;
    for (int i = 1; i <= n; i++) {
        int tmp = i;

        while ((tmp != 0) && (tmp%2 == 0)) {
            n2++;
            tmp /= 2;
        }

        while ((tmp != 0) && (tmp%5 == 0)) {
            n5++;
            tmp /= 5;
        }
    }

    int num = n2 >= n5 ? n5 : n2;
    cout << num;
}