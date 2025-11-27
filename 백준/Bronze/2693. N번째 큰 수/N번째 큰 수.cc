#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    vector<int> v(10);
    
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < 10; j++) {
            cin >> v[j];
        }

        sort(v.begin(), v.end(), greater<>());
        cout << v[2] << "\n";
    }

    return 0;
}