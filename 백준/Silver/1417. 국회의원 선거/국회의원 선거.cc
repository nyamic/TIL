// 한번더풀자

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int dasom;

    cin >> n;
    cin >> dasom;

    vector<int> v(n);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> v[i];
    }
    v[n - 1] = 0;

    sort(v.begin(), v.end(), greater<>());

    int count = 0;

    while (true)
    {
        sort(v.begin(), v.end(), greater<>());
        if (dasom <= v[0])
        {
            v[0]--;
            dasom++;
            count++;
        }
        else
        {
            break;
        }
    }

    cout << count;

    return 0;
}