#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector<int> num(8);
vector<bool> check(9);

void backtracking(int cnt) {
    
    if (cnt == m) {
        for (int i = 0; i < cnt; i++) {
            cout << num[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = 1; i <=n; i++) {
        if (!check[i]) {
            
            num[cnt] = i;
            check[i] = true;

            backtracking(cnt+1);

            check[i] = false;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    backtracking(0);
    return 0;
}
