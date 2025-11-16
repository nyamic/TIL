#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n;

    vector<int> arrA(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arrA[i];
    }

    sort(arrA.begin(), arrA.end());

    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;

        bool found = binary_search(arrA.begin(), arrA.end(), x);

        cout << (found ? 1 : 0) << "\n";
    }

    return 0;
}