#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int x;
    cin >> x;
    
    int dp[1000001];  // 각 숫자를 1로 만드는 최소 횟수 저장
    
    dp[1] = 0;  // 1은 0번
    
    // 2부터 x까지 차례대로 계산
    for (int i = 2; i <= x; i++) {
        // 방법1: 1 빼기
        dp[i] = dp[i-1] + 1;
        
        // 방법2: 2로 나누기 (가능하면)
        if (i % 2 == 0) {
            dp[i] = min(dp[i], dp[i/2] + 1);
        }
        
        // 방법3: 3으로 나누기 (가능하면)
        if (i % 3 == 0) {
            dp[i] = min(dp[i], dp[i/3] + 1);
        }
    }
    
    cout << dp[x];
    
    return 0;
}