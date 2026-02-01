#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<long long int, int> m;

    for (int i = 0; i < n; i++)
    {
        long long int num;
        cin >> num;

        m[num]++;
    }

    // second 기준으로 maxCound 비교 --> 같으면 first비교(작은거)
    // result == first

    long long int result;
    long long int maxCount = 0;
    for (auto &p : m)
    {
        if (p.second > maxCount)
        {
            maxCount = p.second;
            result = p.first;
        }
        else if (p.second == maxCount)
        {
            result = (p.first < result) ? p.first : result;
        }
    }

    cout << result;

    return 0;
}