#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> arr(n);
    int cnt[8001] = {0}; // -4000 ~ 4000

    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
        cnt[arr[i] + 4000]++;
    }

    // 1. 산술평균
    cout << (int)round((double)sum / n) << "\n";

    // 2. 중앙값
    sort(arr.begin(), arr.end());
    cout << arr[n / 2] << "\n";

    // 3. 최빈값
    int maxCnt = 0;
    for (int i = 0; i <= 8000; i++) {
        if (cnt[i] > maxCnt) maxCnt = cnt[i];
    }

    vector<int> modes;
    for (int i = 0; i <= 8000; i++) {
        if (cnt[i] == maxCnt) modes.push_back(i - 4000);
    }

    if (modes.size() == 1) cout << modes[0] << "\n";
    else cout << modes[1] << "\n";

    // 4. 범위
    cout << arr[n - 1] - arr[0] << "\n";

    return 0;
}
