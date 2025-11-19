//swap 쓰면 빠를 듯 

#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[20];

    for (int i = 0; i < 20; i++) {
        arr[i] = i + 1;
    }

    for (int k = 0; k < 10; k++) {
        int a, b;
        cin >> a >> b;

        int l = a - 1;     // 시작 인덱스
        int r = b - 1;     // 끝 인덱스
        while (l < r) {
            swap(arr[l], arr[r]);
            l++;
            r--;
        }
    }

    for (int i = 0; i < 20; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}